// Input : 4
// Output : 1   2   3   4

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);      // Reccursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}