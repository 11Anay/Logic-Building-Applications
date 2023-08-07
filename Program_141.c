/*
    Input : 
        Row     : 6
        Column  : 6

    Output : 
        *   a   a   a   a   a
        b   *   b   b   b   b
        c   c   *   c   c   c
        d   d   d   *   d   d
        e   e   e   e   *   e
        f   f   f   f   f   *   


*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    if(iRow != iColumn)
    {
        printf("Invalid Input");
    }

    for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
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