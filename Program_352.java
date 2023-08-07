// Approach 2

import java.util.*;

class Program_352
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name : ");

        String name = sobj.nextLine();

        System.out.println("Your name is : "+name);

        System.out.println("Length of the string is : "+name.length());

        char str[] =  name.toCharArray();

        for(int iCnt = 0; iCnt < str.length; iCnt++)
        {
            System.out.println(str[iCnt]);
        }
        
        sobj.close();
    }
}