import java.util.Scanner;
class p11
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the String : "); 
		String line=sc.nextLine();
		
		int strlen=line.length();
		
		int i,j;
	
		for (j=0;j<args.length;j++)
		{
			int count=0;
			String str=args[j];
	
			for(i=0;i<strlen;i++)
			{
				char ch=line.charAt(i);
				String s=Character.toString(ch);
				if(str.equals(s))
				{		
					count=count+1;
				}
			}
			System.out.println(str + " is in String : " + count);
		}
	}
}