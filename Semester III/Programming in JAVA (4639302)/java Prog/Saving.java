class Saving extends Account
{
	protected double interestrate;
	
	Saving(int accountNo,double balance,double interestrate)
	{
		super(accountNo,balance);
		this.interestrate=interestrate;
	}
	protected void checkbalance()
	{
		//interest rate is Add in Balance in Saving Account
		double bal=super.balance*interestrate/100;
		bal=bal+super.balance;
		super.balance=bal;
		System.out.println("Your Balance is : " + bal);
	}
	protected void deposit(double amt)
	{
		if(super.balance>=amt)
		{
			super.balance=super.balance+amt;
			System.out.println("After Deposit amount " + amt + " Your Balance is " + super.balance);
		}
		else
		{
				System.out.println("You Balance is Low");
		}
	}
	protected void withdraw(double amt)
	{
		super.balance=super.balance-amt;
		System.out.println("After Withdraw amount " + amt + " Your Balance is " + super.balance);
	}
}