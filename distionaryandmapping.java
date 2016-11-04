/* Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers.
You will then be given an unknown number of names to query your phone book for.For each name queried,
print the associated entry from your phone book on a new line in the form name=phonenumber; 
if an entry for name is not found, print Not found instead*/
import java.util.*;
import java.io.*;
class phoneBook
{
    HashMap<String,Integer> hm=new HashMap<String,Integer>();
    void createPhoneBook(String name,int phone)
    {
        if(hm!=null && !hm.containsKey(name))
        {
            hm.put(name,phone);
        }
    }
    String search(String s)
    {
        if(hm!=null && hm.containsKey(s))
        {
            return s+"="+hm.get(s);
        }
        else
        {
            return "Not found";
        }
    }
}
public class solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        phoneBook pb=new phoneBook();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            pb.createPhoneBook(name,phone);
        }
        while(in.hasNext()){
            String s = in.next();
            System.out.println(pb.search(s));
        }
        in.close();
    }
}

