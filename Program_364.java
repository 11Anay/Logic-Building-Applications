import java.util.*;

class Program_364
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        int Freq[] = new int [26];
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Freq[Arr[iCnt] - 'a']++;
        }
        
        System.out.println("Frequency of each character is : ");
        for(iCnt = 0; iCnt < Freq.length; iCnt++);
        {
            System.out.println("Frequency of "+(char)(iCnt + 'a')+" is"+Freq[iCnt]);
        }

        sobj.close();
    }
}