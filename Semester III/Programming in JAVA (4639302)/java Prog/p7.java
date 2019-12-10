import java.util.*;

public class p7
{
	public static void main(String [] args)
	{
		int no1,no2,no3,max=0,min=0;
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the No1 : ");
		no1=sc.nextInt();
		
		System.out.println("Enter the No2 : ");
		no2=sc.nextInt();
		
		System.out.println("Enter the No3 : ");
		no3=sc.nextInt();
		
		
		if(no1<no2 && no1<no3)
		{
				System.out.println("Minimum Number is : " + no1);
		}
		else if(no2<no3 && no2<no1)
		{
				System.out.println("Minimum Number is : " + no2);
		}
		else
		{
				System.out.println("Minimum Number is : " + no3);
		}
		
		if(no1>no2 && no1>no3)
		{
				System.out.println("Maximum Number is : " + no1);
		}
		else if(no2>no1 && no2>no3)
		{
				System.out.println("Maximum Number is : " + no2);
		}
		else
		{
				System.out.println("Maximum Number is : " + no3);
		}
		
	}
}