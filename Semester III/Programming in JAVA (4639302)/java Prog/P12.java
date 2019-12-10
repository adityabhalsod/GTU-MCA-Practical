class P12
{
	int enrollmentNo;
	String name;
	String gender;
	
	P12()
	{
		//write first Statenment this in constructor Chaning
		this(2);
		
		System.out.println("This is Default Constructor");
		enrollmentNo=1;
		name="Pintu";
		gender="male";
	}
	
	P12(int no)
	{
		System.out.println("This is Constructor Chaining");
		System.out.println(no);
	}
	
	void setenrollmentNo(int enroll)
	{
		enrollmentNo=enroll;
	}
	void setname(String na)
	{
		name=na;
	}
	void setgender(String ge)
	{
		gender=ge;
	}
	
	void getenrollmentNo()
	{
		System.out.println("Enrollment Number is " + enrollmentNo);
	}
	void getname()
	{
		System.out.println("Name is " + name);
	}
	void getgender()
	{
		System.out.println("Gender is " + gender);
	}
	
	public static void main(String args[])
	{
		P12 obj=new P12();	
		obj.setenrollmentNo(1);
		obj.setname("Pritesh");
		obj.setgender("male");
		
		obj.getenrollmentNo();
		obj.getname();
		obj.getgender();
	}
}