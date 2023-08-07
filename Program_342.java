import java.util.*;

class Program_342
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
            System.out.println("Number is an Armstrong number");
        }
        else
        {
            System.out.println("Number is not an Armstrong number");
        }
        sobj.close();
    }
}

class Digits
{
    int CountDigits(int iNo)
    {
        int iCount = 0;
        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }
        return iCount;
    }

    int Power(int X, int Y)
    {
        int iPower = 1;
        for(int iCnt = 1; iCnt <= Y; iCnt++)
        {
            iPower = iPower * X;
        }
        return iPower;
    }

    boolean CheckArmstrong(int iNo)
    {
        int iCount = 0, iDigit = 0, iRet = 0;
        iCount = CountDigits(iNo);

        int iTemp = iNo;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;
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