////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which checks whether the number is divisible by 3 and 5.
//
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisible
//  Input           :   Integer
//  Output          :   Boolean
//  Description     :   Checks whether input is divisible by 3 and 5
//  Author          :   Anay Chandan Soundankar
//  Date            :   25/04/2023
//  Update Date     :
//
////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(( (iNo % 3) == 0 ) && ( (iNo % 5) == 0 ))
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

    printf("Please enter number to check whether it is divisible by 3 and 5 : ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);        // Function Call

    if(bRet == true)
    {
        printf("%d IS completely divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d IS NOT completely divisible by 3 and 5 \n",iValue);
    }
    return 0;
}
