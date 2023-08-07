/*
    Input : 
        Row     : 6
        Column  : 6

    Output : 
        A
        A   B
        A   B   C   
        A   B   C   D   
        A   B   C   D   E
        A   B   C   D   E   F


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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= i; j++,ch++)
        {
            printf("%c\t",ch);
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