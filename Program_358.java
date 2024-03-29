// Approach 2

import java.util.*;

class Program_358
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your name : ");
        String name = sobj.nextLine();
        
        StringX obj = new StringX();
        
        String sRet = obj.StrLower(name);
        System.out.println("Converted string is : "+sRet);

        sRet = obj.StrUpper(name);
        System.out.println("Converted string is : "+sRet);

        sRet = obj.StrToggle(name);
        System.out.println("Converted string is : "+sRet);
        
        sobj.close();
    }
}

class StringX
{   
    public String StrLower(String str)
    {
        // Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        // Step 3 : Convert array to string
        String ret = new String(Arr);
        return ret;
    }

    public String StrUpper(String str)
    {
        // Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }

        // Step 3 : Convert array to string
        String ret = new String(Arr);
        return ret;
    }

    public String StrToggle(String str)
    {
        // Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        // Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        // Step 3 : Convert array to string
        String ret = new String(Arr);
        return ret;
    }
}