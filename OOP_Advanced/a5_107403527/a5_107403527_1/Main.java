package a5_107403527_1;

import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			int size;
			String token;
			Scanner scanner = new Scanner(System.in);
			size = scanner.nextInt();
			token = scanner.next();
			

			for(int i=1; i<=size; i++) {
				for(int k=size; k>i; k--)
					System.out.print(" ");
				for(int j=1; j<=i*2; j++) {
					if(i!=size) {
						if(j==1||j==i*2) {
							System.out.print(token.charAt(0));
						}
						else
							System.out.print(token.charAt(1));
					}
					else
						System.out.print(token.charAt(0));
				}
				System.out.print("\n");
			}

	}
}
