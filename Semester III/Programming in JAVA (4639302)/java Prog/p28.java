import java.util.*;
class p28
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the String");
		String str=sc.nextLine();
		
		boolean value,value1;
		value=checkisUpperCase(str);
		value1=checkisLowerCase(str);
		
		
		if(value)
		{
			String ans=str.toLowerCase();
			System.out.print("\nYour String is " + str + " in Lowercase is " + ans);
		}
		else if(value1)
		{
			String ans1=str.toUpperCase();
			System.out.println("\nYour String is " + str + " in Uppercase is " + ans1);
		}

	}

	public static boolean checkisUpperCase(String s)
	{
		for(int i=0;i<s.length();i++)
		{
			if (!Character.isUpperCase(s.charAt(i)))
			{
				return false;
			}
		}
		return true;
	}
	
	public static boolean checkisLowerCase(String s)
	{
		for(int i=0;i<s.length();i++)
		{
			if (!Character.isLowerCase(s.charAt(i)))
			{
				return false;
			}
		}
		return true;
	}
}