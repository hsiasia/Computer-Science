package a9_107403527;
	
import javafx.application.Application;

import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Pane;
import javafx.fxml.FXMLLoader;

public class a9_107403527 extends Application {
	@Override
	public void start(Stage primaryStage) {
		try{
			Pane root = FXMLLoader.load(getClass().getResource("a9_107403527.fxml"));
			Scene scene = new Scene(root,600,400);
			
			scene.getStylesheets().add(getClass().getResource("application.css").toExternalForm());
			primaryStage.setTitle("Hello World");
			primaryStage.setScene(scene);
			primaryStage.show();
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
