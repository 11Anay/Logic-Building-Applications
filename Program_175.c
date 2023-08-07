#include<stdio.h>

#define ERR_NOT_FOUND -1

void Frequency(char *str)
{
    int iCntC = 0;
    int iCntS = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntS++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntC++;
        }
        str++;
    }
    printf("Frequency of capital leter is %d\n",iCntC);
    printf("Frequency of small leter is %d\n",iCntS);
}

int main()
{
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);

    return 0;
}