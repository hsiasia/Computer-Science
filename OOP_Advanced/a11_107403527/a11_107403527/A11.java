package a11_107403527;
	
import javafx.application.Application;


import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Pane;
import javafx.fxml.FXMLLoader;


public class A11 extends Application {
	
	@Override
	public void start(Stage primaryStage){
		try{
		Pane root = FXMLLoader.load(getClass().getResource("Plane.fxml"));
			
		primaryStage.setTitle("Game");
		Scene window = new Scene(root, 400, 300);
		window.getRoot().requestFocus();
		primaryStage.setScene(window);
		primaryStage.show();
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
