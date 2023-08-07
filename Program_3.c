#include<stdio.h>

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter Second number : \n");
    scanf("%d",&No2);   

    Ans = No1+No2;

    printf("Addition of two numbers is : %d\n",Ans);

    return 0;
}