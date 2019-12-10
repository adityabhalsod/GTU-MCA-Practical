//final variable can be initialized only once in a life

//we can not change its value that why its called constant.
 
public class Gtu21
{
	final int DAYS_IN_WEEK=7;
	int getdata()
	{
		//remove below comment and check
		//DAYS_IN_WEEK=8;
		return DAYS_IN_WEEK;
	}
	public static void main(String args[])
	{
		Gtu21 g=new Gtu21();
		
		System.out.println(g.getdata());
	}
}