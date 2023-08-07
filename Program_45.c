#include<stdio.h>

int FactorialF(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFactorial = iFactorial * iCnt;
        iCnt++;
    }
    return iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialF(iValue);

    printf("Result is : %d",iRet);

    return 0;
}