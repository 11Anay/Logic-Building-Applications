#include<stdio.h>

int strlenSpaceX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenSpaceX(Arr);       //strlenX(100)

    if(iRet > 1)
    {
        printf("Number of the spaces are : %d\n",iRet);
    }
    else
    {
        printf("Number of the space is : %d\n",iRet);
    }
    return 0;
}