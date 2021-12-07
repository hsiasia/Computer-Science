package a6_107403527_2;

import java.util.Arrays;
import java.util.Scanner;

public class Main2 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int line = scanner.nextInt();
		char strArray[][]=new char[line][line];
		String inputStr = scanner.nextLine();
		
		for(int i=0;i<line;i++) {
			inputStr = scanner.nextLine();
			strArray[i] = inputStr.toCharArray();
		}
		
		char ans[][]=new char[line][line];
		
		for(int x=0;x<line;x++) {
			for(int y=0;y<line;y++) {
				if(strArray[x][y]=='*') { 
					ans[x][y]='*';
				}
				else {
					int time=0;
					if(x-1>=0&&x-1<line&&y-1>=0&&y-1<line) {
						if(strArray[x-1][y-1]=='*')
							time+=1;
					}
					if(x-1>=0&&x-1<line&&y>=0&&y<line) {
						if(strArray[x-1][y]=='*') {
							time+=1;
						}
					}
					if(x-1>=0&&x-1<line&&y+1>=0&&y+1<line) {
						if(strArray[x-1][y+1]=='*') {
							time+=1;
						}
					}
					if(x>=0&&x<line&&y-1>=0&&y-1<line) {
						if(strArray[x][y-1]=='*') {
							time+=1;
						}
					}
					if(x>=0&&x<line&&y+1>=0&&y+1<line) {
						if(strArray[x][y+1]=='*') {
							time+=1;
						}
					}
					if(x+1>=0&&x+1<line&&y-1>=0&&y-1<line) {
						if(strArray[x+1][y-1]=='*') {
							time+=1;
						}
					}
					if(x+1>=0&&x+1<line&&y>=0&&y<line) {
						if(strArray[x+1][y]=='*') {
							time+=1;
						}
					}
					if(x+1>=0&&x+1<line&&y+1>=0&&y+1<line) {
						if(strArray[x+1][y+1]=='*') {
							time+=1;
						}
					}
					ans[x][y] = String.valueOf(time).charAt(0);
				}
			}
		}
		
		for(int i=0;i<line;i++) {
			System.out.println(ans[i]);
		}
		return;
	}
}
