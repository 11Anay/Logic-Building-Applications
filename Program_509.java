import java.util.*;
import java.io.*;

class Program_509
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String FolderName = sobj.nextLine();
        
        File fobj = new File(FolderName);

        try
        {
            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();

                System.out.println("Number of files in that directory are : "+list.length);
            }     
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
        sobj.close();
    }
}