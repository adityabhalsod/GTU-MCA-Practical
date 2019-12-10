package stu;
public class Student
{
		String n,eno,no;
		public Student()
		{
			
		}
		public Student(String n,String eno,String no)
		{
			this.n=n;
			this.eno=eno;
			this.no=no;
		}
		public void display()
		{
			System.out.println("Name = " + n + "\n Enrollment Number = " + eno + "\n Phone Number = " + no);
		}
}