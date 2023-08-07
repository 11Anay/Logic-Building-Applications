#include<stdio.h>
#include<stdbool.h>

int CheckDigitFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if( iNo < 0 )
    {
        iNo = -iNo;
    }

    while( iNo != 0 )
    {
        iDigit = iNo % 10;
        if ( iDigit == 8 )
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CheckDigitFrequency(iValue);
    printf("Frequency of 8 is : %d\n",iRet);


    return 0;
}