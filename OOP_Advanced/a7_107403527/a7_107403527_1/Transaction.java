package a7_107403527_1;

public class Transaction {

	private String name;
	private int income=0;
	private int pay=0;

	public Transaction(String name) {
	    this.name=name;
	}

	public String getName() {
		return this.name;
	}

	public int getIncome() {
		return this.income;
	}
	
	public int getPay() {
		return this.pay;
	}

	public void setIncome(int income) {
		this.income=income;
	}

	public void setPay(int pay) {
		this.pay=pay;
	}

}
