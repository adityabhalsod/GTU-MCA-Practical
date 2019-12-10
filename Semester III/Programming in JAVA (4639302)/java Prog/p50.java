import java.io.*;
import java.sql.*;  
import java.util.*; 
public class p50
{  
	public static void main(String args[]) throws Exception,IOException
	{
		int choice;
		
			System.out.println("*************MENU***************");
			System.out.print("1. Create Library Table\n2. Insert Record into Library Table\n3. Update the Existing Record\n4. Display all Records From the Table\n5. Display the name Starting with 'J' Character\n6. Delete the Record\n7. Exit\n");
			System.out.println("********************************");
			
			System.out.println("Enter the Choice");
			Scanner sc=new Scanner(System.in);
			choice=sc.nextInt();
			
			SqlOperation obj=new SqlOperation();
			
			switch(choice)
			{
				case 1:
					obj.create();
					break;
				case 2:
					obj.insert();
					obj.display();
					break;
				case 3:
					obj.display();
					obj.update();
					obj.display();
					break;
				case 4:
					obj.display();
					break;
				case 5:
					obj.displaywhere();
					break;
				case 6:
					obj.display();
					obj.delete();
					obj.display();
					break;
				case 7:
					System.out.println("Exit");
					break;
				default:
					System.out.println("Not Valid");
			}
	}
}  

class SqlOperation
{	  
	public void create() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
		
	   try{
			Statement stmt=con.createStatement(); 
	  
			String sql="create table Library(BookId int,ISSNNo int,Author varchar(20),BookTitle varchar(30),price int,Publisher varchar(20),Year varchar(4));";
			stmt.executeUpdate(sql);
			System.out.println("Table created successfully...");
	   }
	   catch(Exception e)
	   {
			System.out.println(e);
	   }
	}
	public void  insert() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
		try
		{
			String insertTableSQL = "INSERT INTO Library VALUES(?,?,?,?,?,?,?)";			
			PreparedStatement stmt = con.prepareStatement(insertTableSQL);

			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the Book BookId");
			int bid=sc.nextInt();
			
			System.out.println("Enter the Book ISSNNO");
			int issn=sc.nextInt();
			
			System.out.println("Enter the Book Author");
			String author=sc.next();
			
			System.out.println("Enter the Book Title");
			String title=sc.next();
			
			System.out.println("Enter the Book Price");
			int price=sc.nextInt();
			
			System.out.println("Enter the Book Publisher");
			String pub=sc.next();
			
			System.out.println("Enter the Book Year");
			String y=sc.next();
			
			stmt.setInt(1, bid);
			stmt.setInt(2, issn);
			stmt.setString(3, author);
			stmt.setString(4, title);
			stmt.setInt(5, price);
			stmt.setString(6, pub);
			stmt.setString(7, y);
		
			// execute insert SQL stetement
			stmt.executeUpdate();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		
	}
	public void update() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
	
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Book ISSN No");
		int isbn=sc.nextInt();
		
		System.out.println("Enter the Book New Price");
		int price=sc.nextInt();
		
		String query = "update Library set price = ? where ISSNNO = ?";
		PreparedStatement preparedStmt = con.prepareStatement(query);
		preparedStmt.setInt(1,price);
		preparedStmt.setInt(2,isbn);

      // execute the java preparedstatement
      preparedStmt.executeUpdate();
	}
	public void display() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
		
		Statement stmt1=con.createStatement(); 
		ResultSet rs=stmt1.executeQuery("select * from Library");  
		while(rs.next())
		{  
			System.out.println(rs.getInt(1) + " " + rs.getInt(2) + " " + rs.getString(3)+ " "  + rs.getString(4)+ " "  + rs.getInt(5) + " " + rs.getString(6) + " " + rs.getString(7));  
		}
	}
	public void displaywhere() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
		
		Statement stmt2=con.createStatement(); 
		ResultSet rs1=stmt2.executeQuery("select * from Library where BookTitle like'j%'");  
		while(rs1.next())
		{  
			System.out.println(rs1.getInt(1) + " " + rs1.getInt(2) + " " + rs1.getString(3)+ " "  + rs1.getString(4)+ " "  + rs1.getInt(5) + " " + rs1.getString(6) + " " + rs1.getString(7));  
		}
	}
	public void delete() throws IOException,Exception,SQLException
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost/LibraryDb","root","admin");
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Book ISSN No");
		int isbn=sc.nextInt();
		
		String query = "delete from Library where  ISSNNo= ?";
		PreparedStatement preparedStmt = con.prepareStatement(query);
		preparedStmt.setInt(1,isbn);
		
		preparedStmt.executeUpdate();
	}
}