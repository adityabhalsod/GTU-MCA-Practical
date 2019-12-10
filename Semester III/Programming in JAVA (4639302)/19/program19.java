interface account{
	
	public String acoontno="70212010107772";
	public int balance=2000;
	public float deposit=1000;
	public float withdraw=1000;
}

class savings implements account{
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

class current implements account{
	int overdraft_limit=10000;

	public void check_balance()
	{

		System.out.println("||Current Account Info ||\n\n");
		System.out.println("Current Account Balance:"+balance);
	}

	public void check_withdraw()
	{
		System.out.println("Withdraw from Current Account :"+withdraw);
	}

	public void check_deposit()
	{
		System.out.println("Deposit in current Account :"+deposit);
	}
}
public class program19{
public static void main(String[] args) {
	savings s=new savings();
	current c =new current();
	s.check_balance();
	s.check_deposit();
	s.check_withdraw();
	c.check_balance();
	c.check_deposit();
	c.check_withdraw();
	}
}
