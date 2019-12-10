class p19  //Account
{
	public static void main(String args[])
	{
		System.out.println("Saving Account is");
		Saving obj=new Saving(101,20000.00,10.00);
		obj.checkbalance();
		obj.deposit(1000.00);
		obj.withdraw(500.00);
		obj.checkbalance();
		
		System.out.println("Current Account is");
		Current obj1=new Current(102,60000.00,50000);
		obj1.checkbalance();
		obj1.deposit(1000.00);
		obj1.withdraw(5000.00);
		obj1.checkbalance();
	}
}