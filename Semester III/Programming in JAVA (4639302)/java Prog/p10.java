import java.util.*;

public class p10
{
	public static void main(String [] args)
	{
		int len=args.length;
		System.out.println("Number of Argument is : " + len);
		
		String a[]={"one","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven"};
		
		for(int i=0;i<args.length;i++)
		{
			System.out.println((i+1) + ".: " + a[i] + " Student Name is = " + args[i]);
		}
	}
}