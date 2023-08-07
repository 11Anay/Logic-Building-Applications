////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which checks whether the number is even or odd.
//
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Input           :   Integer
//  Output          :   Boolen
//  Description     :   Checks whether input is even or add
//  Author          :   Anay Chandan Soundankar
//  Date            :   25/04/2023
//  Update Date     :
//
////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(( iNo % 2 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                 // Variable to a accept input
    bool bRet = false;              // Variable to accept return value

    printf("Please enter number to check whether it is even or odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);        // Function Call

    if(bRet == true)
    {
        printf("%d is an Even number! \n",iValue);
    }
    else
    {
        printf("%d is an Odd number! \n",iValue);
    }
    return 0;
}
