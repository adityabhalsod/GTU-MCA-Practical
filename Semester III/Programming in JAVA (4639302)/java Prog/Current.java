class Current extends Account
{
	public double overdraftLimit;  //withdraw Amount Limit
		
	Current(int accountNo,double balance,double overdraftLimit)
	{
		super(accountNo,balance);
		this.overdraftLimit=overdraftLimit;
	}
	protected void checkbalance()
	{
		//interest rate is not in Current Account
		System.out.println("Your Balance is : " + super.balance);
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
		if(amt>=overdraftLimit)
		{
			System.out.println("You are not Withdraw money More then overdraftLimit " + overdraftLimit);
		}
		else
		{
			super.balance=super.balance-amt;
			System.out.println("After Withdraw amount " + amt + " Your Balance is " + super.balance);
		}
	}
}