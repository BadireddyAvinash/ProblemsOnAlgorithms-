<%@ page import="java.sql.*,java.io.*,java.util.*,javax.servlet.*" %>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
<script type="text/javascript">
	$(document).ready(function()
								{
					    			$(".button1").click(function()
					    						{	
					    							var td1 = $(this).closest("tr").find(".tableData").text();
					    						 	$(this).closest("tr").hide();
					    						 	var xhttp = new XMLHttpRequest();
													xhttp.onreadystatechange = function()
													{
														if(xhttp.readyState == 4 && xhttp.status == 200)
														 {
														 }
													};
													xhttp.open("GET", "deleteTblItems.jsp?ItemNo="+td1, true);
													xhttp.send();
					    						});
					    		});
</script>
<%
out.print("avinash");
try
{  
	Class.forName("com.mysql.jdbc.Driver");  
	Connection con=DriverManager.getConnection("jdbc:mysql://192.241.244.177:3306/AviSuperMarket","root","tecnics"); 
	Statement stmt=con.createStatement(); 
	out.print("connection sucess"); 
	ResultSet rs=stmt.executeQuery("select * from tblItems where ItemNo ='"+request.getParameter("ItemNo")+"';"); 
	if(rs.isBeforeFirst())
    	{
			String query = "update tblItems set ItemName= '"+request.getParameter("ItemName")+"',ItemPrice="+request.getParameter("ItemPrice")+",ItemQty="+request.getParameter("ItemQty")+" where ItemNo='"+request.getParameter("ItemNo")+"';";
			stmt.executeUpdate(query);
		}
	else 
		{
			String query = "insert into tblItems (ItemNo, ItemName, ItemPrice, ItemQty) values('"+request.getParameter("ItemNo")+"','"+request.getParameter("ItemName")+"','"+request.getParameter("ItemPrice")+"','"+request.getParameter("ItemQty")+"');";
			stmt.executeUpdate(query);
		}
%>
			<DIV id = "div1">
			<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="1">
			<TR>
			    <TH>ItemNO</TH>
			    <TH>ItemName</TH>
			    <TH>ItemPrice</TH>
			    <TH>ItemQty</TH>
			    <TH>Delete</TH>
			</TR>

			<%
				ResultSet rs2=stmt.executeQuery("select * from tblItems;"); 
				while(rs2.next())
				{
			%>
					<TR>
						<TD class = "tableData"><%= rs2.getString(1)%></TD>
						<TD ><%= rs2.getString(2)%></TD>
						<TD ><%= rs2.getInt(3)%></TD>
						<TD ><%= rs2.getInt(4)%></TD>
						<TD><BUTTON class = "button1"> Delete </BUTTON></TD>
					</TR>

			<%
		}
				con.close(); 
	}
		catch(Exception e)
	{
		e.printStackTrace();
	}
%>
</DIV>
</TABLE>
