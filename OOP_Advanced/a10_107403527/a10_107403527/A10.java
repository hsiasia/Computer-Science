package a10_107403527;
	
import javafx.application.Application;

import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Pane;
import javafx.fxml.FXMLLoader;


public class A10 extends Application {
	public static Stage currentStage;
	public static Scene menuScene;
	
	@Override
	public void start(Stage primaryStage){
		try{
		currentStage = primaryStage;
		Pane root = FXMLLoader.load(getClass().getResource("menu.fxml"));
		menuScene = new Scene(root);
			
		currentStage.setTitle("Greedy Snake");
		currentStage.setScene(menuScene);
		currentStage.show();
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
