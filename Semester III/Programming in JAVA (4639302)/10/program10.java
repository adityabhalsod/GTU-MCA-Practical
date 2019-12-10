import java.util.Scanner;
class program10{
	
	public static  void print_string(String s1,String s2,String s3)
	{
	System.out.println("First Student Name is :"+s1);
	System.out.println("Second Student Name is :"+s2);
	System.out.println("Third Student Name is :"+s3);

	}
	public static void main(String[] args) {
	
	String[] s= new String[3];
	String s2,s3,s4;
	Scanner input=new Scanner(System.in);
           System.out.print("Please Enter 3 Names : \n");

	for(int i=0;i<s.length;i++)
	{

		s[i]=input.next();
	}	
	
	s2=s[0];
	s3=s[1];
	s4=s[2];

	print_string(s2,s3,s4);

	}
}

