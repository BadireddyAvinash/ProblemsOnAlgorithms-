<%@ page import="java.sql.*" %>
<%
	try
	{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://192.241.244.177:3306/AviSuperMarket","root","tecnics"); 
		Statement stmt=con.createStatement();  
		String query = "delete from tblItems where ItemNo = '"+request.getParameter("ItemNo")+"';";
		stmt.executeUpdate(query);	

		con.close(); 
	}
		catch(Exception e)
	{
		e.printStackTrace();
	}

%>