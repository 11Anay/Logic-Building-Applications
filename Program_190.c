#include<stdio.h>

// 1 : Travel till end of the dest
// 2 : Copy the data from src to dest
// 3 : Write '\0' at the end of dest

void strcatX(char *src, char * dest, int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }
    
    *dest = ' ';
    dest++;
    
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }

    *dest = '\0';
}   

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of letters that you want to concat : \n");
    scanf("%d",&iNo);

    strcatX(Arr,Brr,iNo);

    printf("String after concatenation is : %s\n",Brr);

    return 0;
}