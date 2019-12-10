class Rect
{
	int length;
	int width;
	Rect()
	{
		length=5;
		width=10;
	}
	Rect(int length,int width)
	{
		this.length=length;
		this.width=width;	
	}
	Rect(Rect myrect)
	{
		length=myrect.length;
		width=myrect.width;
	}
	void showdata()
	{
		System.out.println("Value of length is..."+length);
		System.out.println("Value of length is..."+width+"\n\n");
	}

	public static void main(String args[])
	{
		Rect r1=new Rect();
		Rect r2=new Rect(12,3);
		Rect r3=new Rect(r2);

		System.out.println("Default constructor value for r1");
		r1.showdata();

		System.out.println("parameterized constructor value for r2");
		r2.showdata();

		System.out.println("Copy constructor value for r3");
		r3.showdata();
		
		
	}
}