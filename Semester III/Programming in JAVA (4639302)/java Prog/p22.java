class p22
{
	public static void main(String args[])
	{
		B obj=new B();
		obj.display();
	}
}
class A
{
		static int x=10;
}	
class B extends A
{
	int x=20;
	void display()
	{
		System.out.println("A Class x : " + super.x);
		System.out.println("B Class x : " + x);
	}
}