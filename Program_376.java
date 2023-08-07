import java.util.*;

class Program_376
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();

        String Arr[] = str.split(" ");

        int iMax = 0;
        int iPos = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt].length() > iMax)
            {
                iMax = Arr[iCnt].length();
                iPos = iCnt; 
            }
        }

        System.out.println("Largest word is : "+Arr[iPos]+" with length : "+iMax);

        sobj.close();
    }
}