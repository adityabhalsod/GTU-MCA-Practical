import java.util.*;

abstract class Shape{
	float x,y,z;
		Shape(float a,float b){
			x=a;
			y=b;
		}
		Shape(float r){
			z=r;
		}
		
		abstract void area();
}

class Rectangle extends Shape
{
		float ans;
		Rectangle(float l,float b){
			super(l,b);
		}
		void area(){
			ans=x*y;
			System.out.println("Area of Rectangle="+ans);
			}
}

class Triangle extends Shape{
	float ans;
	Triangle(float a,float b){
		super(a,b);
	}
	void area(){
		ans=0.5f*(x*y);
		System.out.println("Area of Triangle is="+ans);
		}
}
class Circle extends Shape{
	float ans;
	Circle(float r)
	{
		super(r);
	}
	void area()
	{
			ans=3.14f*(z*z);
			System.out.println("Area of Circle is="+ans);
	}
}
class p23{
	public static void main(String a[]){
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Value of L:");
		float l=sc.nextFloat();
		
		System.out.println("Enter Value of B:");
		float b=sc.nextFloat();
		
		Shape s=new Rectangle(l,b);
		s.area();
		Shape s1=new Triangle(l,b);
		s1.area();
		
		System.out.println("Enter Value of r:");
		float r=sc.nextFloat();
		
		Shape s3=new Circle(r);
		s3.area();
	}
}