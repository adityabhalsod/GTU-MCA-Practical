import java.util.*;
class p5
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the No : ");
		
		int no=sc.nextInt();
		int no1=no;
		int rem,sum=0,temp=0;
		while(no!=0)
		{
			rem=no%10;
			sum=sum+(rem*rem*rem);
			temp=temp*10+rem;
			no=no/10;
		}
		System.out.println("Sum is : " + sum);
		
		if(sum==no1)
		{
			System.out.println("Number is Amstrong Number");
		}
		else
		{
			System.out.println("Number is Not Amstrong Number");
		}
	}
}