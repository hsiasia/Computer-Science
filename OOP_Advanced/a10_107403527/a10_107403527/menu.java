package a10_107403527;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;

import javafx.scene.layout.Pane;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.control.Toggle;

import java.io.IOException;


public class menu {
	@FXML
	private Button Press1;
	@FXML
	private Button Press2;

	@FXML
	public void Press1() throws IOException{
		Pane maze = FXMLLoader.load(getClass().getResource("GreedySnake.fxml"));
        Scene mazeScene = new Scene(maze);
        mazeScene.getRoot().requestFocus();
        A10.currentStage.setScene(mazeScene);
	}
	@FXML
	public void Press2(){
		A10.currentStage.close();
	}
}
