import java.util.*;

/*
    Input : 371
    3 ^ 3 + 7 ^ 3 + 1 ^ 3
    27  + 343   + 1
    371
*/

class Program_341
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        boolean bRet = dobj.CheckArmstrong(iNo);
        
        if(bRet == true)
        {
            System.out.println("Number is an Armstrong Number");
        }
        else
        {
            System.out.println("Number is not an Armstrong Number");
        }
        sobj.close();
    }
}

class Digits
{
    boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;

        // Count number of Digits
        int iCount = 0;
        while(iTemp != 0)
        {
            iCount++;
            iTemp = iTemp / 10;
        }
        iTemp = iNo;

        int iSum = 0, iPower = 1, iCnt = 0, iDigit = 0;

        //Logic to split the number
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            //Logic to calculate power
            for(iCnt = 1; iCnt <= iCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;
            iNo = iNo / 10;
        }
        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}