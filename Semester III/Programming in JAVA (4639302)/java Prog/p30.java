final class A
{
	
}
class B //extends A   // error: Cannot extend final class 'B'
{
	int i = 7;
    int j = 1;
    A x = new A();
    void f() 
	{
		System.out.println("B.f() function....");
    }
}
class p30
{
	public static void main(String args[])
	{
		B n = new B();
		n.f();
		n.i = 40;
		n.j++;
		System.out.println("n.i = "+n.i+", n.j = "+n.j);

	}
}