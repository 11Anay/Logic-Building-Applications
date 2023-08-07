import java.util.*;
import java.io.*;

class Program_511
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String FolderName = sobj.nextLine();
        
        File fobj = new File(FolderName);
        String Header = null;

        try
        {
            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                for(int i = 0; i < list.length; i++)
                {
                    Header = list[i].getName()+" "+list[i].length();
                    System.out.println("---------------------------");
                    System.out.println(Header);
                    System.out.println("---------------------------");
                }
            }     
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
        sobj.close();
    }
}