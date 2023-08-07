#include<stdio.h>

void strcpyX(char *src, char * dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Original string is : %s\n",Arr);
    printf("String after copy is : %s\n",Brr);

    return 0;
}