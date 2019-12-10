import java.io.*;
import java.util.*;

public class p39 {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Path");
		String path=sc.next();
		
		// create File object
		File stockFile = new File(path); //"d://Stock/stockFile.txt"

		try 
		{
			stockFile.createNewFile();
		} 
		catch (IOException e) 
		{
			 System.out.println("Error while Creating File in Java" + e);
		}

		System.out.println("File is Create at Path " + stockFile.getPath());

	}
}