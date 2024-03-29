import java.util.*;
import java.io.*;

class Program_520
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
            
            String Tokens[];
            Tokens = HeadStr.split(" ");

            System.out.println("File name is : "+Tokens[0]);
            System.out.println("File length is : "+Tokens[1]);

            File newfileobj = new File(Tokens[0]);
            newfileobj.createNewFile();

            FileOutputStream outobj = new FileOutputStream(newfileobj);
            int FileSize = Integer.parseInt(Tokens[1]);
            byte Buffer[] = new byte[FileSize];

            inobj.read(Buffer, 0, FileSize);

            outobj.write(Buffer,0,FileSize);

            inobj.close();
            outobj.close();
            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}