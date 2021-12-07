package a7_107403527_1;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		ArrayList<Transaction> array=new ArrayList<Transaction>();

    	String name;
    	String Moneystr;
    	int Income;
    	int Pay;
    	int MaxLengthName=0;
    	int MaxLengthIncome=0;
    	
		int op = 1;
		while(op>=1&&op<=4) {
			op = scanner.nextInt();
		    switch(op){
		        case 1:
		        	String inputStr = scanner.nextLine();
		        	inputStr = scanner.nextLine();
		        	String[] strArray = inputStr.split(" ");
		        	name=strArray[0];
		        	Moneystr=strArray[1];
		        	Income=Integer.parseInt(Moneystr);
		        	
		            Transaction s=new Transaction(name);
		            s.setIncome(Income);
		            
		            if(name.length()>MaxLengthName) {
		  		    	MaxLengthName=name.length();
		  		    }
		            if(Moneystr.length()>MaxLengthIncome) {
		            	MaxLengthIncome=Moneystr.length();
		  		    }
		            array.add(s);
		            break;
		        case 2:
		        	String inputStr2 = scanner.nextLine();
		        	inputStr2 = scanner.nextLine();
		        	String[] strArray2 = inputStr2.split(" ");
		        	name=strArray2[0];
		        	Moneystr=strArray2[1];
		        	Pay=Integer.parseInt(Moneystr);
		        	
		            Transaction s2=new Transaction(name);
		  		    s2.setPay(Pay);
		  		    
		  		    if(name.length()>MaxLengthName) {
		  		    	MaxLengthName=name.length();
		  		    }
		            array.add(s2);
		            break;
		        case 3:
		        	int total=0;
		        	for(int i = 0; i < array.size(); i++) {
		        		total+=array.get(i).getIncome();
		        		total-=array.get(i).getPay();
		        		String Outname = String.format("%-"+MaxLengthName+"s", array.get(i).getName());
		        		String OutIncome = String.format("%-"+MaxLengthIncome+"d", array.get(i).getIncome());
		                System.out.println(Outname+"  "+OutIncome+"  "+array.get(i).getPay());
		            }
		        	System.out.println("Total: "+total);
		            break;
		        case 4:
		        	return;
		        default:
		            System.out.println("Ivalid Operation");
		            op=1;
		            break;
		    }
		}
		  
	}

}
