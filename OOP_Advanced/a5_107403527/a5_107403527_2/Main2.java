package a5_107403527_2;

import java.util.Scanner;

public class Main2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			int temp;
			int ans=0;
			
			Scanner scanner = new Scanner(System.in);
			temp = scanner.nextInt();
			
			if(temp==-1) {
				System.out.print("None");
				return;
			}
			while(temp!=-1) {
				if(temp>ans)
					ans=temp;
				temp = scanner.nextInt();
			}
			System.out.print(ans);

	}
}
