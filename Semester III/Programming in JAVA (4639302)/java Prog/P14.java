class P14
{
	double length;
	double width;
	
	static int count;
	
	static
	{
		count=0;
		System.out.println("Static Block is Executed");
	}
	
	void init()
	{
		System.out.println("Init method is called");
	}
	
	P14()
	{
		count++;
		System.out.println("This is Default Constructor");
	}
	P14(double l,double w)
	{
		length=l;
		width=w;
		System.out.println("This is Constructor Ovreloading");
		
		double ans=l*w;
		System.out.println("Area of Squree is : " + ans);
	}
	
	void area(double le,double wi)
	{
		double ans=le*wi;
		System.out.println("Area of Squree is : " + ans);
	}
	
	public static void main(String args[])
	{
		P14 obj=new P14();
		obj.area(10.00,20.00);
		P14 obj1=new P14();
		P14 obj2=new P14();
		P14 obj3=new P14();
		obj3.area(10.00,20.00);
		P14 obj4=new P14(10.00,20.00);
		System.out.println("No of Objects Are : " + count);
	}

}