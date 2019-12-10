import exam.*;
import stu.*;
public class P25_new
{
	public static void main(String args[])
	{		
		Student obj=new Student("Pritesh","3015","24465"); 
		obj.display();
		
		Res obj1=new Res("Pritesh","3015","24465",78,12,65); 
		obj1.display();
	
		System.out.println();
		Result1 obj2=new Result1("Pritesh","3015","24465",78,12,65); 
		obj2.display();
	}
}