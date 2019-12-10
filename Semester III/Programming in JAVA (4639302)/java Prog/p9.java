import java.util.*;
class p9
{
	public static void main(String args[])
	{
		int row,col;
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter the Row");
		row=sc.nextInt();
		
		int i,j;
		
		System.out.println("Enter the Elements");
		for(i=0;i<row;i++)
		{
			System.out.println("Enter the Number of Col for row " + (i+1));
			col=sc.nextInt();
			
			int a[][]=new int[row][col];
			
			int sum=0;
			
			for(j=0;j<col;j++)
			{
				System.out.println("Enter the Column " + (j+1) + " for Row " + (i+1));
				a[i][j]=sc.nextInt();
				sum=sum+a[i][j];
			}
			System.out.println("\n Sum of row " + (i+1) + " is " + sum);
		}
		sc.close();
	}
}