import java.util.*;

class Program_375
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();

        String arr[] = str.split(" ");

        System.out.println("Enter word you eant to search : ");
        String Word = sobj.nextLine();

        int iFrequency = 0;
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt].equals(Word));
            {
                iFrequency++;
            }
        }
        System.out.println("Frequency of word India is : "+iFrequency);
        sobj.close();
    }
}