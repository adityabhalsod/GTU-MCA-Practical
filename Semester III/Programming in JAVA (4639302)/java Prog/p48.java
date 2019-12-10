import java.io.*;
import java.sql.*;  
public class p48
{  
	public static void main(String args[]) throws Exception,IOException
	{
		try
		{  
			Class.forName("com.mysql.cj.jdbc.Driver");  
 			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/EmployeeDbTest","root","admin");  
			Statement stmt=con.createStatement(); 
	  
			String sql="create table Employee(Empno int,Name varchar(20),Designation varchar(30),Salary int,PRIMARY KEY(Empno));";
			stmt.executeUpdate(sql);
			System.out.println("Table created successfully...");
			
			String sql1 = "INSERT INTO Employee " +
                   "VALUES (100, 'Zara', 'General Manager', 28000)";
			stmt.executeUpdate(sql1);
			
			String sql2 = "INSERT INTO Employee " +
                   "VALUES (101, 'pritesh', 'Manager', 22000)";
			stmt.executeUpdate(sql2);
			
			String sql3 = "INSERT INTO Employee " +
                   "VALUES (102, 'shreedhar', 'It', 20000)";
			stmt.executeUpdate(sql3);
			
			String sql4 = "INSERT INTO Employee " +
                   "VALUES (103, 'raj', 'Computer Operator', 18000)";
			stmt.executeUpdate(sql4);
			
			
			System.out.println("Insert Record successfully...");

			String sql5 = "Select * from Employee";
			ResultSet rs=stmt.executeQuery(sql5);
				
			while(rs.next())
			{	
				System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getString(3) + " " + rs.getInt(4));
			}
			con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  