public class program18{
	
	public static void main(String[] args) {
		
		Vehicle v=new Vehicle();
		Vehicle c=new car();
		c.display();
	}
}

class Vehicle{

	private String vehicle_type;

	public Vehicle(){
		vehicle_type="LMV";
	}

	public void display(){

		System.out.println("Vehicle Info:");
		System.out.println("Vehicle_Type:"+vehicle_type);
	};
}
class car extends Vehicle{

	public String model_type="i20";
	public String company_name="hyundai";
	public String color="red";
	public void display(){
		super.display();
	System.out.println("model_type"+model_type+"\ncompany_name"+company_name+"\ncolor:"+color);
    }
}
