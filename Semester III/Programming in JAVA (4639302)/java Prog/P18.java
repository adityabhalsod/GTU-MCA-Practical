class P18
{
	public static void main(String args[])
	{	
		car obj=new car();
		obj.setdata("car","Disal","BMW");
		obj.display();
	}
}
class Vehical
{
	String vehicle_type;

	void display()
	{
		System.out.println("super");
		System.out.println("Vehicle Type is : " + vehicle_type);
	}	
}
class car extends Vehical
{	
	String model_type;
	String company_name;
	
	void setdata(String vt,String model,String company)
	{
		super.vehicle_type=vt;
		model_type=model;
		company_name=company;
	}
	
	void display()
	{
		super.display();
		System.out.println("sub");
		System.out.println("Vehicle Type is : " + super.vehicle_type);
		System.out.println("Model Type is : " + model_type);
		System.out.println("Company Name is : " + company_name);
	}
}
