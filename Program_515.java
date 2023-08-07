import java.util.*;
import java.io.*;

class Program_515
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the folder name : ");
        String FolderName = sobj.nextLine();
        
        File fobj = new File(FolderName);
        String Header = null;

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackedFile = sobj.nextLine();

        byte Buffer[] = new byte[1024];
        int iRet = 0;
        
        sobj.close();
        try
        {
            File Packobj = new File(PackedFile);
            boolean bRet = Packobj.createNewFile();
            if(bRet == false)
            {
                System.out.println("Unable to create a packed file.");
                return;
            }

            FileOutputStream outobj = new FileOutputStream(Packobj);
            bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                for(int i = 0; i < list.length; i++)
                {
                    if((list[i].getName().endsWith(".txt")))
                    {
                        Header = list[i].getName()+" "+list[i].length();
                        for(int j = Header.length(); j < 100; j++)
                        {
                            Header = Header + " ";
                        }
                        byte bHeader[] = Header.getBytes();

                        outobj.write(bHeader,0,bHeader.length);

                        FileInputStream inobj = new FileInputStream(list[i]);

                        //  Loop to write th data
                        while((iRet = inobj.read(Buffer)) != -1)
                        {
                            outobj.write(Buffer,0,iRet);
                        }
                        inobj.close();

                        //System.out.println("---------------------------");
                        //System.out.println(Header);
                        //System.out.println("---------------------------");
                    }
                }
            }
            outobj.close();     
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
}