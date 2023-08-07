#include<stdio.h>

#define ERR_NOT_FOUND -1

int LastOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = ERR_NOT_FOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charecter : ");
    scanf(" %c",&ch);

    iRet = LastOccurance(Arr,ch);

    if(iRet == ERR_NOT_FOUND)
    {
        printf("There is no such character.\n");
    }
    else
    {
        printf("Last occurance of that character is at : %d\n",iRet);
    }
    return 0;
}