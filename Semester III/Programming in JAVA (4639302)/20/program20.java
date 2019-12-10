public class program20{
	public String acoontno="70212010107772";
	public int balance;
	public float deposit;
	public float withdraw;
	public program20()
	{
		System.out.println("default constructor");
	}
	public program20(int balance,float deposit,float withdraw)
	{
		this.balance=balance;
		this.deposit=deposit;
		this.withdraw=withdraw;
	}
public static void main(String[] args) {
	program20 a=new program20(2000,1000,1000);
	savings s=new savings();

	s.check_balance();
	s.check_deposit();
	s.check_withdraw();
	}


}
class savings extends program20{
		public float interest_rate=4;
	public void check_balance()
	{
		System.out.println("||Savings Account Info ||\n\n");
		System.out.println("Saving Account Balance:"+balance);
	}
	public void check_withdraw()
	{
		System.out.println("Withdraw from Saving Account :"+withdraw);
	}

	public void check_deposit()
	{
		
		System.out.println("Deposit in Saving Account :"+deposit);
	}
}
