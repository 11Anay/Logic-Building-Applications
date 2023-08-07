/*
    Input : 
        Row     : 4
        Column  : 4

    Output : 
       *    *   *   * 
       *    *   &   *  
       *    &   *   *  
       *    *   *   *   



*/


#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i = 0;
    int j = 0;

    if(iRow != iColumn)
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if( ((i == 1) || (i == iRow)) || ((j == 1) || (j == iRow)) || (i==j) )
            {
                printf("*\t");
            }
            else
            {
                printf("&  \t");
            }
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