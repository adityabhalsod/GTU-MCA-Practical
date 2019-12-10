import java.io.*; 
import java.io.File; 
import java.util.*;
import java.nio.*;
//check method 4 and 5 (Paths and Files Keyword Error)
public class p40 
{ 
	public static void main(String[] args)throws Exception 
	{ 
		//(1) using BufferedReader 
		// We need to provide file path as the parameter: 
		// double backquote is to avoid compiler interpret words 
		// like \test as \t (ie. as a escape sequence) 
		File file = new File("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 

		BufferedReader br = new BufferedReader(new FileReader(file)); 

		String st; 
		while ((st = br.readLine()) != null) 
		{
			System.out.println(st); 
		}
			
		// (2) FileReader using FileReader 
		// pass the path to the file as a parameter 
		FileReader fr = new FileReader("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 
		int i; 
		while ((i=fr.read()) != -1) 
		{
			System.out.print((char) i); 
		}
		System.out.println();
		//(3) using Scanner Class 
		// pass the path to the file as a parameter 
		File file1 = new File("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 
		Scanner sc2 = new Scanner(file1); 

		while (sc2.hasNextLine()) 
		{
			System.out.println(sc2.nextLine()); 
		}
		
		//Scanner class but without using While loops
		File file2 = new File("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt"); 
		Scanner sc1 = new Scanner(file2); 
  
		// we just need to use \\Z as delimiter 
		sc1.useDelimiter("\\Z");
		System.out.println(sc1.next());
		
		/*
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
		System.out.println(data); */
	} 
	/*
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
		}*/ 
} 
