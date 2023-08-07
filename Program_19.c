#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Filter for negative input
    if( iNo < 0 )
    {
        printf("Error : Invalid Input.\n");
        printf("Note : Please enter positive number.\n");
    }
    for( iCnt=1; iCnt<=iNo; iCnt++ )
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency.\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}