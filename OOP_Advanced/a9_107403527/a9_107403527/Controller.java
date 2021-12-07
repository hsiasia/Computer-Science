package a9_107403527;

import javafx.fxml.FXML;

import javafx.scene.control.Button;

import javafx.scene.control.ToggleGroup;

import javafx.scene.control.TextField;
import javafx.scene.control.Toggle;
import javafx.event.ActionEvent;

import javafx.scene.control.RadioButton;

import javafx.scene.control.CheckBox;

public class Controller {
	@FXML
	private CheckBox Check;
	@FXML
	private Button Press3;
	@FXML
	private RadioButton A;
	@FXML
	private ToggleGroup YESNO;
	@FXML
	private RadioButton B;
	@FXML
	private Button Press1;
	@FXML
	private Button Press2;
	@FXML
	private TextField text;

	// Event Listener on Button[#Press3].onAction
	@FXML
	public void Press1(){
        String t = text.getText();//獲取文字框輸入的內容
        System.out.println(t);
	}
	@FXML
	public void Press2(){
		RadioButton s = (RadioButton) YESNO.getSelectedToggle();
		System.out.println(s);
//		String s1 = s.getText();
//	    System.out.println(s1);
	}
	@FXML
	public void Press3(){
		boolean b = Check.isSelected();//獲取文字框輸入的內容
        System.out.println(b);
	}
}
