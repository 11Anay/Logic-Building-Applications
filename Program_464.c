// Input : 5
// Output : 5   2   3   4   1

#include<stdio.h>

void DisplayI(int iNo)
{
    while(iNo != 0)
    {
        printf("%d\t",iNo%10);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    return 0;
}