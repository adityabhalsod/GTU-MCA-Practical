package exam;

import stu.*;

public class Result1 extends Student
{
	int m1,m2,m3;
	public Result1()
	{
		
	}
	public Result1(String n,String eno,String no,int m1,int m2,int m3)
	{
		super(n,eno,no);
		this.m1=m1;
		this.m2=m2;
		this.m3=m3;
	}  
	public void display()
	{
		super.display();
		int avg;
		avg=(m1+m2+m3)/3;
		System.out.println("\n Mark1 = " + m1 + "\n Mark2 = " + m2 + "\n Mark3 = " + m3 + "\n Average = " + avg);
	}
}