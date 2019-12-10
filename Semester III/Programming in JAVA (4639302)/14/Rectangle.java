class Rectangle{
	public static int length;
	public static int width;
	{
		System.out.println("This is initializer block");
	}
	Static
	{
		System.out.println("This is static initializer block");
	}
	public Rectangle() //default constructor
	{
		length=0;
		width=0;
	}

	public Rectangle(int length,int width) //parameterized constructor//constructor overloading
	{
		this.length=length;
		this.width=width;
	}
	public static void area()
	{
		float area;
		area=length*width;
		System.out.println("Area of Rectangle is :"+area);
	}
}
public class program14{
		
		public static void main(String[] args) {
		Rectangle rect=new Rectangle(10,20);
		rect.area();
	}
}
