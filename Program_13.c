////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Display "Jay Ganesh" in the entered value times from user
//
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>       // For printf and scanf

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   
//  Output          :   void
//  Description     :   Display "Jay Ganesh".
//  Author          :   Anay Chandan Soundankar
//  Date            :   26/04/2023
//  Update Date     :
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    // Filter
    if( iNo < 0)
    {
        printf("Please enter the positive number\n");
    }

    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");    
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// Example of ITERATION
int main()
{
    int iValue = 0;
    
    printf("How many times you want to iterate the message? \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
