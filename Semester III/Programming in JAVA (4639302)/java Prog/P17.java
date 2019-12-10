class P17
{
	static int count=0;
	double radius;
	
	P17()
	{
		this("hello");
		count++;
		System.out.println("Constructor is Called");
	}
	P17(String str)
	{
		System.out.println(str + " World");
	}
	public static void main(String args[])
	{
		P17 obj=new P17();
		P17 obj1=new P17();
		P17 obj2=new P17();
		System.out.println("Number of Object is : " + count);
	}
}