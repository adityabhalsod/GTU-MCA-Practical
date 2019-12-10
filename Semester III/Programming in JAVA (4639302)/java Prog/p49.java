import java.sql.*;
import java.io.*;
import java.util.*;

public class p49 {

	private static final String DB_DRIVER = "com.mysql.cj.jdbc.Driver";
	private static final String DB_CONNECTION = "jdbc:mysql://localhost:3306/StudentDb";
	private static final String DB_USER = "root";
	private static final String DB_PASSWORD = "admin";

	public static void main(String[] argv) throws IOException,SQLException,Exception
	{
		try 
		{	
			//Insert Recored
			Class.forName(DB_DRIVER);  
 			Connection con=DriverManager.getConnection(DB_CONNECTION,DB_USER,DB_PASSWORD); 

			String insertTableSQL = "INSERT INTO student VALUES(?,?,?)";			
			PreparedStatement stmt = con.prepareStatement(insertTableSQL);

			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the Roll Number");
			int rn=sc.nextInt();
			
			System.out.println("Enter the Student Name");
			String nm=sc.next();
			
			System.out.println("Enter the Student Percentage");
			int per=sc.nextInt();
			
			stmt.setInt(1, rn);
			stmt.setString(2, nm);
			stmt.setInt(3, per);

			// execute insert SQL stetement
			int i=stmt.executeUpdate();
			System.out.println(i+" records inserted"); 
			
			
			//Display Records
			Statement stmt1=con.createStatement(); 
			ResultSet rs=stmt.executeQuery("select * from student");  
			while(rs.next())
			{  
				System.out.println(rs.getInt(1)+" "+rs.getString(2)+ " " + rs.getInt(3));  
			}
			stmt.close();
			con.close();
		} 
		catch (SQLException e)
		{
			System.out.println(e.getMessage());
		}
	}
}