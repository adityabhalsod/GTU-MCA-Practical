import java.util.*;
import java.io.*;

import java.util.*;
class p36 {
 
    public static void main(String[] args) {
        try 
		{
			//Create File
			File file = new File("MyFile.txt");
			boolean fvar = file.createNewFile();
			 if (fvar){
				  System.out.println("File has been created successfully");
			 }
			 else{
				  System.out.println("File already present at the specified location");
			 }
			
			//write in a file
			FileWriter writer = new FileWriter("MyFile.txt", true);  //true=if file not Exist it create new File with that file name
            writer.write("Hello World");
            writer.write("\r\n");   // write new line
            writer.write("Good Bye!");
            writer.close();
				
			//read from a file
            FileReader reader = new FileReader("MyFile.txt");
            int character;
 
            while ((character = reader.read()) != -1) {
                System.out.print((char) character);
            }
			System.out.println();
            reader.close();
 
			//modify = ??
			 try
             {
				 File file1 = new File("MyFile.txt");
				 FileReader fr=new FileReader(file1);
				 BufferedReader reader1 = new BufferedReader(fr);
				 String line = "", oldtext = "";
				 
				 while((line = reader1.readLine()) != null)
				 {
					 oldtext += line + "\r\n";
				 }
				 reader1.close();
				 
				 // replace a word in a file
				 Scanner sc=new Scanner(System.in);
				 System.out.println("Enter Old String");
				 String old=sc.nextLine();
				 System.out.println("Enter New String");
				 String nw=sc.nextLine();
				 String newtext = oldtext.replaceAll(old,nw);
				
				 //To replace a line in a file
				 //String newtext = oldtext.replaceAll("This is test string 20000", "blah blah blah");
				
				 FileWriter writer1 = new FileWriter("MyFile.txt");
				 writer1.write(newtext);
				 writer1.close();
			}
			catch (IOException e)
			{
				e.printStackTrace();
			}
		}	
		catch (IOException e) 
		{
            e.printStackTrace();
        }
    }
}