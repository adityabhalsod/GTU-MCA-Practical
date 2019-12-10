class staticblock
{
	static int count;
	static
	{
		System.out.println("This is from static block");
		count=0;
	}
	public static void main(String args[])
	{
			
		System.out.println("This is call from main method");
	}
}