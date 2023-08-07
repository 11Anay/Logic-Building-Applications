#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter the first string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the second string : ");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr,Brr);        // strcmpX(100,200)

    if(bRet == true)
    {
        printf("Both the strings are identical.\n");
    }
    else
    {
        printf("Both the strings are different.\n");
    }
    return 0;
}
/*
If the length of the first string is N and second string is M then
the time complexity of the given application is X, where X is the
position of first mismatched character of both the strings
*/