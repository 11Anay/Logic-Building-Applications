/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    *
    *   *
    *   *   *
    *   *   *   *
    *   *   *   
    *   *
    *

*/  

#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i = 0, j = 0;

    if(iRow != iColumn)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = 1; i <= iRow-1; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if(j <= i)              // Diagonal with lower triangle
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
