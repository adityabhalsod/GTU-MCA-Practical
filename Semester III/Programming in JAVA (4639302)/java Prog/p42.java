import java.io.*;
class p42
{
	public static void main(String args[])
	{
		try
		{
			FileReader fr=new FileReader("F:\\MCA GMC College\\SEM-3\\java Prog\\MyFile.txt");
			BufferedReader br=new BufferedReader(fr);
			String line=br.readLine();
			int count=0;
			
			System.out.println("File Contain is : ");
			while(line!=null){
				System.out.println(line);
				count++;
				line=br.readLine();				
			}
			
			System.out.print("Total number of lines in file is : "+count);
			br.close();
		}
		catch(Exception e)
		{
			e.printStackTrace();
			System.out.println("error"+e.getMessage());
		}
	}
}
