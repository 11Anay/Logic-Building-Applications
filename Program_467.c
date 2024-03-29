// Input : 5
// Output : 5   2   3   4   1

#include<stdio.h>

void DisplayR(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo);      // Head Recursion
        printf("%d\t",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}