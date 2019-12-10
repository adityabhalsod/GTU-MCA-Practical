package cpack;
import apack.*;
public class C  
{
	public C()
	{ 
		
	}
	public void display()
	{
		A obj=new A();
		//b is private so we can access in another package
		// error: b has private access in A
		//Protected is only Access with its sub class 
		//error: c has protected access in A
		//System.out.println("Public Variable = " + obj.a + "\nPrivate Variable = " + obj.b + "\nProtected Variable = " + obj.c);
		
		System.out.println("Public Variable = " + obj.a);
	}
}