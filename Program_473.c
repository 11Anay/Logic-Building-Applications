#include<stdio.h>

int strlenI(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenI(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenI(Arr);

    printf("Length of the string is : %d",iRet);

    return 0;
}