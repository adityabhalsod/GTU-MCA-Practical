class P13
{
	private int enrollmentNo;
	private String name;
	private String gender;
	
	void setenrollmentNo(int enrollmentNo)
	{
		this.enrollmentNo=enrollmentNo;
	}
	void setname(String name)
	{
		this.name=name;
	}
	void setgender(String gender)
	{
		this.gender=gender;
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
		P13 obj=new P13();	
		obj.setenrollmentNo(1);
		obj.setname("Pritesh");
		obj.setgender("male");
		
		obj.getenrollmentNo();
		obj.getname();
		obj.getgender();
	}
}