class p32 
{
	public static void main(String args[])
	{		
		try
		{
			int c[]=new int[5];  
			c[5]=30/0;
			
			try
			{
				int a=10;
				int b=0;
				
				//2 throw
				if(a==0 || b==0)
				{
					throw new MyException("Divide by Zero Exception");
				}
				//1 throws
				p31 obj=new p31();
				System.out.println(obj.division(15,0));
			}
			
			catch(MyException e)
			{
				System.out.println(e);
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
			finally
			{
				System.out.println("Finally Block Execute");
			}
			// throw is used to create a new exception and throw it.
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		finally
		{
			System.out.println("Finally Block Execute");
		}
	}
	
	
	int division(int a,int b) throws ArithmeticException
	{
		int c =a%b;
		return c;
	}
}
//user define Exception
class MyException extends Exception
{
   String str1;
   
   MyException(String str2) 
   {
	str1=str2;
   }
   public String toString()
   { 
	return ("MyException Occurred: "+str1) ;
   }
}