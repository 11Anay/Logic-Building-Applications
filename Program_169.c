#include<stdio.h>

int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charecter : \n");
    scanf(" %c",&ch);

    iRet = CountChar(Arr,ch);       //strlenX(100)

    printf("Number of occurances in the string is : %d",iRet);

    return 0;
}