package a1_107403527_2;

import java.util.Scanner;
import java.lang.*;

public class Main2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		int checknum = num;
		int testnum = 0, tempnum = 0;

		// int NofNum = (int) (Math.log10(num) + 1);

		tempnum = num / 100;
		testnum += Math.pow(tempnum, 3);

		num = num % 100;

		tempnum = num / 10;
		testnum += Math.pow(tempnum, 3);

		num = num % 10;

		tempnum = num;
		testnum += Math.pow(tempnum, 3);

		if (testnum == checknum) {
			System.out.println(checknum + " is a narcissistic number.");
		} else
			System.out.println(checknum + " is not a narcissistic number.");

	}

}
