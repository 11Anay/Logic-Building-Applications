import java.util.*;
import java.io.*;

class Program_507
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name to check the length of the file : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);
            
            System.out.println("Length of the file is : "+fobj.length());
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
        sobj.close();
    }
}