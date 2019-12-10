class p33  //Account
{
	public static void main(String args[])
	{
		bank obj=new bank();
		obj.deposit(1000.00);
		obj.checkbalance();
		obj.withdraw(400.00);
		obj.checkbalance();
		obj.withdraw(300.00);
		obj.checkbalance();
		obj.withdraw(500.00);
		obj.checkbalance();
	}
}
class bank
{
	double amount;
	void deposit(double b)
	{
		amount=b;
	}
	void checkbalance()
	{
		System.out.println("Your Balance is : " + amount);
	}
	void withdraw(double a)
	{
		try
		{
			if(a<this.amount)
			{
				double amt=this.amount-a;
				this.amount=amt;
			}
			else
			{
				throw new MyException("Not Sufficient Fund");
			}
		}
		catch(MyException e)
		{
			System.out.println(e);
		}
		
	}
}

class MyException extends Exception
{
	String str1;
	MyException(String str)
	{
		str1=str;
	}
	public String toString()
	{
		return ("MyException Occurred: " + str1) ;
	}
}