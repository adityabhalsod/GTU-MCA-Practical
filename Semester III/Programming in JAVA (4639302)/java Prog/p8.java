import java.util.*;
class p8
{
	public static void main(String args[])
	{
		int row,col;
		int i,j;
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter First Matrix");
		
		System.out.println("Enter the Row");
		row=sc.nextInt();
		
		System.out.println("Enter the Col");
		col=sc.nextInt();
		
		int a[][]=new int[row][col];
		
		System.out.println("Enter the Elements of matrix");
		for(i=0;i<row;i++)
		{	
			for(j=0;j<col;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		display(a,row,col);
		
		System.out.println("Enter Second Matrix");	
		int b[][]=new int[row][col];
		
		System.out.println("Enter the Elements of matrix");
		for(i=0;i<row;i++)
		{	
			for(j=0;j<col;j++)
			{
				b[i][j]=sc.nextInt();
			}
		}
		display(b,row,col);
		
		
		Multiplay(a,b,row,col);
		
		sc.close();
	}
	
	public static void display(int a[][],int row,int col)
	{
		int i,j;
		System.out.println("Your Matrix is ");
		for(i=0;i<row;i++)
		{	
			for(j=0;j<col;j++)
			{
				System.out.print(a[i][j] + "\t");
			}
			System.out.println();
		}
	}
	
	public static void Multiplay(int a[][],int b[][],int row,int col)
	{
		int i,j,k,sum;
		int ans[][]=new int[row][col];
		for(i=0;i<row;i++)
		{	
			for(j=0;j<col;j++)
			{
				sum=0;
				for(k=0;k<col;k++)
				{
					sum+=a[i][k]*b[k][j];
				}
				ans[i][j]=sum;
			}
		}
		System.out.println("Multiplication")
		display(ans,row,col);
	}
}