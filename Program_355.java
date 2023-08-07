// Approach 2

import java.util.*;

class Program_355
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(name);
        System.out.println("Number of small characters are : "+iRet);
        
        iRet = obj.CountCapital(name);
        System.out.println("Number of capital characters are : "+iRet);

        sobj.close();
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCount) >= 'a') && (str.charAt(iCount) <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountCapital(String str)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCount) >= 'A') && (str.charAt(iCount) <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}