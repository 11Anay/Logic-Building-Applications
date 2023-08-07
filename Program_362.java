// Approach 2

import java.util.*;

class Program_362
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        String name = sobj.nextLine();
        
        StringX obj = new StringX();
        String sRet = obj.RemoveWhiteSpace(name);

        System.out.println("Result is : "+sRet);
        
        sobj.close();
    }
}

class StringX
{   
    public String RemoveWhiteSpace(String str)
    {
        return str.replaceAll("\\s","");
    }
}