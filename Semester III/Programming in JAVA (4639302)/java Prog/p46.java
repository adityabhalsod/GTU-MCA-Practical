import java.io.*;
import java.sql.*;  
public class p46
{  
	public static void main(String args[]) throws Exception,IOException
	{
		try
		{  
			Class.forName("com.mysql.cj.jdbc.Driver");  
 			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/set2","root","admin");  
			Statement stmt=con.createStatement();  
			ResultSet rs=stmt.executeQuery("select * from department");  
				
				while(rs.next())
				{	
					System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getString(3));
				}
				con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  