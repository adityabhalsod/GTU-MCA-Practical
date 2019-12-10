package MyData;
public class Person{
	String F_name,L_name,address,Phone;
	public Person(){
	}
	 public Person(String F_name,String L_name,String address){
		this.F_name=F_name;
		this.L_name=L_name;
		this.address=address;
	}
	public void display(){
		System.out.println("First Name="+F_name);
		System.out.println("Last Name="+L_name);
		System.out.println("Address="+address);
	}
}
