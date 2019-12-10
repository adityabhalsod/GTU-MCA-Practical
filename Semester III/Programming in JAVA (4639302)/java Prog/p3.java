import java.util.*;
class p3
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the No : ");
		
		int no=sc.nextInt();
		int no1=no;
		int reminder,temp=0;
		
		while(no!=0)
		{
			reminder=no%10;
			temp=temp*10+reminder;
			no=no/10;
		}
		
		System.out.println("Reverse Number is : " + temp);
		
		if(no1==temp)
		{
			System.out.println("Palimdrome Number");
		}
		else
		{
			System.out.println("Not Palimdrome Number");
		}
	}
}