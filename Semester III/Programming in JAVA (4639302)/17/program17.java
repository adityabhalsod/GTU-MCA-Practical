class program17{
public static void main(String args[])
	{
		circle c1=new circle();
		circle c2=new circle();
	}
}
class circle
{
	static int count;
	static
	{
		count=0;
	}
	circle()
	{
		count++;
		System.out.println(count +"...object created");
	}
}
