package MyData;
public class Employee extends Person{
	String Designation;
	double salary;
	public Employee(){}
	public Employee(String f_name,String l_name,String add,String Designation,double salary){
		super(f_name,l_name,add);
		this.Designation=Designation;
		this.salary=salary;
	}
		public void displayEmployee(){
			super.display();
			System.out.println("Designation="+Designation);
			System.out.println("Salary="+salary);
		}
}