#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFactorial = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFactorial = iFactorial * iCnt;
    }
    return iFactorial;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d",iRet);

    return 0;
}