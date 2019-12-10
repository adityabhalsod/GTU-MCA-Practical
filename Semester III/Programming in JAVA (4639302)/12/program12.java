public class program12{
	private int no;
	String name;
	String gender;
	program12(){
	no=0;
	}
	program12(int no){
	this.no=no;
	}
	public void setNo(int no){
		this.no=no;
	}
	public void setName(String name){
		this.name=name;
	}
	public void setGender(String gender){
		this.gender=gender;
	}
	public void getNo(){
		System.out.println(no);
	}
	public void getName(){
		System.out.println(name);
	}
	public void getGender(){
		System.out.println(gender);
	}


	public static void main(String args[])
	{
		program12 s1=new program12();
		s1.setNo(1);
		s1.setName("abc");
		s1.setGender("male");
		s1.getNo();
		s1.getName();
		s1.getGender();
	}
}
