class Gtu12
{
	private int no;
	String name;
	String gender;
	
	Gtu12()
	{
		System.out.println("This is Default Constructor");
		no=0;
	}
	Gtu12(int no)
	{
		this.no=no;
	}
	public void setNo(int no)
	{
		this.no=no;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public void setGender(String gender)
	{
		this.gender=gender;
	}
	public void getNo()
	{
			System.out.println(no);
		
	}
	public void getName()
	{
			System.out.println(name);
	}
	public void getGender()
	{
			System.out.println(gender);
	}
	
	public static void main(String args[])
	{
		Gtu12 s1=new Gtu12();
		s1.setNo(1);
		s1.setName("payal");
		s1.setGender("female");
		s1.getNo();
		s1.getName();
		s1.getGender();
		Gtu12 s2=new Gtu12(2);
		s2.getNo();
		
	}
}