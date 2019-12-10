// Java program to demonstrate lambda expressions 
// single abstract method 
interface FuncInterface 
{ 
	// An abstract function 
	void abstractFun(int x); 

	// A non-abstract (or default) function 
	default void normalFun() 
	{ 
		System.out.println("Hello"); 
	} 
} 

class p27 
{ 
	public static void main(String args[]) 
	{ 
		// lambda expression to implement above 
		// functional interface. This interface 
		// by default implements abstractFun() 
		FuncInterface fobj = (int x)->System.out.println(2*x); 
		
		// This calls above lambda expression and prints 10. 
		fobj.abstractFun(5);
		fobj.normalFun();
		
		//full
		/*
			FuncInterface fobj =new FuncInterface();
			
			fobj.abstractFun(5);
			
			
			void abstractFun(int x)
			{
				System.out.println(2*x);
			}
		*/
	} 
} 
