package a6_107403527_1;

import java.util.Arrays;
import java.util.Scanner;

public class Main1 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String inputStr = scanner.nextLine();
		
		while(!inputStr.equals("STOP")) {
			String[] strArray = inputStr.split(" ");
			int[] num = new int[strArray.length];
			
			for(int i = 0 ; i < num.length ; i++){
			    num[i] = Integer.parseInt(strArray[i]);
			}
			
			Arrays.sort(num);
			int temp=num[num.length-1];
			int ans=0;
			for(int j=num.length-2;j>=0;j--) {
				if(num[j]!=temp) {
					ans=num[j];
					break;
				}
			}
			System.out.println(ans);
			inputStr = scanner.nextLine();
		}
		return;
	}
}
