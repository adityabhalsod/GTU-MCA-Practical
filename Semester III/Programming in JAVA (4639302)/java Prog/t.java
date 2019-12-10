import java.io.*; 
import java.io.File; 
import java.util.*;
import java.nio.*;
class t
{
	public static void main(String args[])
	{
		//(4) Reading whole file in a list
		// Java program to illustrate reading data from file 
		// using nio.File 
		//import java.nio.charset.StandardCharsets; 
		//import java.nio.file.*; 
		
		List l = readFileInList("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 

		Iterator<String> itr = l.iterator(); 
		while (itr.hasNext()) 
		System.out.println(itr.next()); 
	
		 
		 
		//(5) Reading Text file as String	  
		String data = readFileAsString("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 
		System.out.println(data);
	}
	
	
	//(4) Reading whole file in a list
		// Java program to illustrate reading data from file 
		// using nio.File 
		//import java.nio.charset.StandardCharsets; 
		//import java.nio.file.*; 

		public static List<String> readFileInList(String fileName) 
		{ 

			List<String> lines = Collections.emptyList(); 
			try
			{ 
			lines = Files.readAllLines(Paths.get(fileName), StandardCharsets.UTF_8); 
			} 

			catch (IOException e) 
			{ 

			// do something 
			e.printStackTrace(); 
			} 
			return lines; 
		} 
		
	//(5) Reading Text file as String
		public static String readFileAsString(String fileName)throws Exception 
		{ 
			String data = ""; 
			data = new String(Files.readAllBytes(Paths.get(fileName))); 
			return data; 
		}
}