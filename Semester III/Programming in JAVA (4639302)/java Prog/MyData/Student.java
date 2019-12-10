package MyData;
public class Student extends Person{
	String inst_name,degree;
	public Student(){}
	public Student(String f_name,String l_name,String add,String inst_name,String degree){
			super(f_name,l_name,add);
		this.inst_name=inst_name;
		this.degree=degree;
	}
	public void displayStudent(){
		super.display();
		System.out.println("Institute Name="+inst_name);
		System.out.println("Degree="+degree);
	}

}