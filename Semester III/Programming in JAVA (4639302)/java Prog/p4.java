import java.util.*;
class p4
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the No : ");
		
		int no=sc.nextInt();
		int fact=1;
		for(int i=1;i<=no;i++)
		{
			fact=fact*i;
		}
		
		System.out.println("Factorial is : " + fact);
	}
}