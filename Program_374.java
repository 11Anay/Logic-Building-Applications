import java.util.*;

class Program_374
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();

        String arr[] = str.split(" ");

        int iFrequency = 0;
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt].equals("India"));
            {
                iFrequency++;
            }
        }
        System.out.println("Frequency of word India is : "+iFrequency);
        sobj.close();
    }
}