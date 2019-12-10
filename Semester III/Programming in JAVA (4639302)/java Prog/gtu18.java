/*GTU 18 :---Create a class Vehicle with data member vehicle_type. Inherit the class in a class called car with data member model_type, company name etc. display the information of the vehicle by defining the display function in both super and sub class [ Method Overriding]*/

class vehicle
{
	String vehicle_type;
	vehicle(String vehicle_type)
	{
		this.vehicle_type=vehicle_type;
	}
	public void display()
	{
		System.out.println(vehicle_type);
	}
}
class car extends vehicle
{
	String model_type;
	String company_name;
	car(String vehicle_type,String model_type,String company_name)
	{
		super(vehicle_type);
		this.model_type=model_type;
		this.company_name=company_name;
	}
	public void display()
	{
		System.out.println(model_type);
		System.out.println(company_name);
	}
}
class Gtu18
{
	public static void main(String args[])
	{
		car mycar=new car("Four","Ak18","Maruti");
		
		mycar.display();
	}
}
