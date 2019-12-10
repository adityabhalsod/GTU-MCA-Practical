import java.util.*;

class p2
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Min");
		int a=sc.nextInt();
		
		
		System.out.println("Enter Max");
		int b=sc.nextInt();
		
		int i,count,no;
		
		System.out.println("Prime Numbers are");
		for(i=a;i<=b;i++)
		{
			count=0;
			for(no=i;no>=1;no--)
			{
				if(i%no==0)
				{
					count++;
				}
			}
			if(count==2)
			{
					System.out.println(i);
			}
			
		}
		
		
		System.out.println("Fibonacci Numbers are");
		int a1=1,a2=1,a3;
		while(a1<=b)
		{
			System.out.println(a1);
			a3=a1+a2;
			a1=a2;
			a2=a3;
		}
		
		sc.close();
	}
	
}