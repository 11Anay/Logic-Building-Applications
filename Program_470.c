// Input : 5
// Output : 5   2   3   4   1

#include<stdio.h>

void FactorsI(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo / 2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    FactorsI(iValue);

    return 0;
}