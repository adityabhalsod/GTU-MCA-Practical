import java.util.*;
import java.io.*;

class p38
{
  public static void main(String[] args)
  {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the File name");
	String fn=sc.next();
    // test to see if a file exists
    File file = new File(fn);
    if (file.exists() && file.isFile())
    {
      System.out.println("file exists, and it is a file");
    }
	else
	{
		System.out.println("file is not exists,or it is not a file");
	}
  }
}