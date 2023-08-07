import java.util.*;
import java.io.*;

class Program_517
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];

        System.out.println("------------------- Marvellous Packer Unpacker --------------------");
        System.out.println("UnPacking Activity of the application is started...");

        System.out.println("Enter the file name which contains the packed data : ");
        String PackedFile = sobj.nextLine();
        
        sobj.close();

        try
        {
            File Packobj = new File(PackedFile);
        
            FileInputStream inobj = new FileInputStream(Packobj);

            inobj.read(Header,0,100);
            String HeadStr = new String(Header);
            System.out.println(HeadStr);

            inobj.close();
            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}