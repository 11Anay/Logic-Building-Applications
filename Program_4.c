/*
Steps to create an application
1) Understand the problem
2) Write the Algorithm
3) Decide programming language
4) Write the program
5) Test the program
*/


/*
ALGORITHM

    START
        1)Accept first number as No1
        2)Accept second number as No2
        3)Create one varibale as ANS
        4)Perform Addition of No1 & No2
        5)Store the addition into variable ANS
        6)Display the value of ANS
    STOP
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// Problem Statement : Write an program which performs addition of two numbers
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Unsigned integer, Unsigned Integer  
//  Output        : Unsigned integer
//  Description   : Performs addition of two numbers
//  Author        : Anay Chandan Soundankar
//  Data          : 18/04/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry Point Function
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is : %d\n",iAns);

    return 0;
}