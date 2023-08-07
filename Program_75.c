#include<stdio.h>               // IO
#include<stdlib.h>              // Memory Management

// void Demo(int *Arr, int iLength)
void Demo(int Arr[], int iLength)
{
    // Step 5 - Perform the operation on array
}

int main()                      // Entry Point Function
{
    int iSize = 0;              // To store the address of an array
    int *ptr = NULL;            // To store the address of an array
    int iCnt = 0;               // Loop Counter

    // Step 1 - Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // Step 2 - Allocate the memory dynamically
    ptr = (int*)malloc(iSize * sizeof(int));

    // Step 3 - Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of an array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // Step 4 - Pass the array to the function

    Demo(ptr,iSize);            // Demo(400,4)

    // Step 6 - Deallocate the memory of an array
    free(ptr);

    return 0;                   // return success to the OS
}