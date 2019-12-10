import java.util.*;

interface Exam{
	boolean Pass(int mark);
}
interface Classify{
	String Division(int avg);
}

class Result implements Exam,Classify{
	public boolean Pass(int mark){
			if(mark>=50)
				return true;
			else
				return false;
	}

	public String Division(int avg){
		if(avg>=60)
			return "First";
		else if(avg>=50 && avg<=59)
			return "Second";
		else
			return "No-Division";
	}	
}

public class p24 {
	public static void main(String[] args) {
		boolean pass;
		int mark,avg;
		String division;
		
		Scanner sc=new Scanner(System.in);	
		System.out.println("Enter the Subject mark : ");
		mark=sc.nextInt();
			
		avg=mark/1;
		
		Result obj=new Result();
		pass=obj.Pass(mark);
		division=obj.Division(avg);
		
		if(pass)
		{
			System.out.println("Passed - "+ division + ".");
		}
		else
		{
			System.out.println("Failed - " + division+ ".");
		}
	}
}
