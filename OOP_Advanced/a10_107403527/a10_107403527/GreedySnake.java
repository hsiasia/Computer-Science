package a10_107403527;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Button;

import javafx.scene.control.ToggleGroup;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.Pane;
import javafx.scene.control.TextField;
import javafx.scene.control.Toggle;

import java.io.IOException;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.RadioButton;

import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;

public class GreedySnake implements EventHandler<KeyEvent>{
	int beforerow = -1;
	int beforeColumn = -1;
	int rowIndex = 0;
	int columnIndex = 0;
	int reset = 0;
	
	@FXML
	Pane man;
	@FXML
	Pane man2;
	@FXML
	Pane exit;
	@FXML
	GridPane maze;
	@FXML
	Label successLabel;
	@FXML
	Label falseLabel;
	@FXML
	Button backButton;

	// Event Listener on Button[#Press3].onAction
	@FXML
	public void onBackPressed(){
        A10.currentStage.setScene(A10.menuScene);
	}
	@Override
	public void handle(KeyEvent e) {
		if(e.getCode() == KeyCode.UP) {
			beforerow = rowIndex;
			beforeColumn = columnIndex;
			rowIndex--;
		}
		else if(e.getCode() == KeyCode.DOWN) {
			beforerow = rowIndex;
			beforeColumn = columnIndex;
			rowIndex++;
		}
		else if(e.getCode() == KeyCode.LEFT) {
			beforerow = rowIndex;
			beforeColumn = columnIndex;
			columnIndex--;
		}
		else if(e.getCode() == KeyCode.RIGHT) {
			beforerow = rowIndex;
			beforeColumn = columnIndex;
			columnIndex++;
		}
		else if(e.getCode() == KeyCode.SPACE) {
			beforerow = -1;
			beforeColumn = -1;
			rowIndex = 0;
			columnIndex = 0;
			reset = 1;
		}
		walkToNewPosition();
		int exitRowIndex = GridPane.getRowIndex(exit);
		int exitColumnIndex = GridPane.getColumnIndex(exit);
		if(rowIndex == exitRowIndex && columnIndex == exitColumnIndex) {
			successLabel.setVisible(true);
			backButton.requestFocus();
		}
	}
	@FXML
	public void walkToNewPosition(){
		int maxRowIndex = maze.getRowCount() -1 ;
		int maxColumnIndex = maze.getColumnCount() -1;
		if(rowIndex <= 0) {
			rowIndex = 0;
		}
		if(rowIndex > maxRowIndex) {
			rowIndex = maxRowIndex;
		}
		if(columnIndex <= 0) {
			columnIndex = 0;
		}
		if(columnIndex > maxColumnIndex) {
			columnIndex = maxColumnIndex;
		}
		if(rowIndex > 4 || columnIndex > 4 || columnIndex < 0) {
			falseLabel.setVisible(true);
			backButton.requestFocus();
			return;
		}
		if(rowIndex == beforerow && columnIndex == beforeColumn) {
			falseLabel.setVisible(true);
			backButton.requestFocus();
			return;
		}
		GridPane.setRowIndex(man, rowIndex);
		GridPane.setColumnIndex(man, columnIndex);
//		System.out.println("1:"+rowIndex+" "+columnIndex);
		if(reset == 0) {
			GridPane.setRowIndex(man2, beforerow);
			GridPane.setColumnIndex(man2, beforeColumn);
		}
		else {
			GridPane.setRowIndex(man2, 0);
			GridPane.setColumnIndex(man2, 0);
			reset = 0;
		}
//		System.out.println("2:"+beforerow+" "+beforeColumn);		
	}
	public void backButton() throws IOException{
		Pane maze = FXMLLoader.load(getClass().getResource("menu.fxml"));
        Scene mazeScene = new Scene(maze);
        mazeScene.getRoot().requestFocus();
        A10.currentStage.setScene(mazeScene);
	}
}
