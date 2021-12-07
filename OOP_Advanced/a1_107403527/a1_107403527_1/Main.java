package a1_107403527_1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int score1, score2, score3;
		Scanner scanner = new Scanner(System.in);

		score1 = scanner.nextInt();
		score2 = scanner.nextInt();
		score3 = scanner.nextInt();

		int sum = score1 + score2 + score3;
		int avg = sum / 3;
		System.out.println(avg);

		switch (avg / 10) {
		case 10:
		case 9:
			System.out.println("A");
			break;
		case 8:
			System.out.println("B");
			break;
		case 7:
			System.out.println("C");
			break;
		case 6:
			System.out.println("D");
			break;
		default:
			System.out.println("F");
		}
	}

}
