#include<stdio.h>

int FactorialB(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFactorial = iFactorial * iCnt;
    }
    return iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialB(iValue);

    printf("Result is : %d",iRet);

    return 0;
}