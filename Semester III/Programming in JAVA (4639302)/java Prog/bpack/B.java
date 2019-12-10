package bpack;
import apack.*;
public class B extends A
{
	public B()
	{
		 
	}
	public void display()
	{
		//b is private so we can access in another package
		// error: b has private access in A
		//System.out.println("Public Variable = " + obj.a + "\nPrivate Variable = " + obj.b + "\nProtected Variable = " + obj.c);
		
		System.out.println("Public Variable = " + super.a + "\nProtected Variable = " + super.c);
	}
}