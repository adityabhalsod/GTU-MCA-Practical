//BufferedReader 
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
//Scanner
import java.util.Scanner; 


public class p37 
{ 
	public static void main(String[] args) throws IOException 
	{ 
		//BufferedReader
		System.out.println("Using BufferedReader");		
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in)); 
		System.out.println("Enter the Name");
		String name = reader.readLine(); 
		System.out.println(name);

		//Scanner
		System.out.println("Using Scanner");
		Scanner in = new Scanner(System.in); 
		System.out.println("Enter the Name");
		String s = in.nextLine(); 
		System.out.println("You entered string "+s);
		System.out.println("Enter the Number");		
		int a = in.nextInt(); 
		System.out.println("You entered integer "+a);
		System.out.println("Enter the Float Number");		
		float b = in.nextFloat(); 
		System.out.println("You entered float "+b); 
		
		// Using Console to input data from user 
		System.out.println("Using Console");
		System.out.println("Enter the First Number");
        String fname = System.console().readLine(); 
        System.out.println(fname); 

	} 
} 
