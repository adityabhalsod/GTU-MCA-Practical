import java.io.*;
import java.util.*;

public class p41 {
	public static void main(String[] args) {

		File file = new File("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt");
		
		

		try {			
			
			// if file doesn't exists, then create it
			if (!file.exists() && !file.isFile())
			{
				System.out.println("File is Not Exist");
				//file.createNewFile();
			}
			else
			{
				FileOutputStream fop = new FileOutputStream(file);
				String content = "This is the text content";
				// get the content in bytes
				byte[] contentInBytes = content.getBytes();

				fop.write(contentInBytes);
				System.out.println("Content Are Written in file");
				
				//show file contain
				Scanner sc2 = new Scanner(file); 

				while (sc2.hasNextLine()) 
				{
					System.out.println(sc2.nextLine()); 
				}
				
				fop.flush();
				fop.close();
			}	

		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}