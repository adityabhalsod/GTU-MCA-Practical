class p31 
{
	public static void main(String args[])
	{
		int a=10;
		int b=0;
		
		try
		{
			//int c=a%b;
			if(a==0 || b==0)
			{
				throw new MyException("Divide by Zero Exception");
			}
			// throw is used to create a new exception and throw it.
		}
		catch(MyException e)
		{
			System.out.println(e) ;
		}
	}
}

class MyException extends Exception{
   String str1;
   
   MyException(String str2) {
	str1=str2;
   }
   public String toString(){ 
	return ("MyException Occurred: "+str1) ;
   }
}