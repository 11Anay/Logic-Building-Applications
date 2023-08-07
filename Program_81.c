#include<stdio.h>               // IO
#include<stdlib.h>              // Memory Management

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLength);
}

int main()                      // Entry Point Function
{
    int iSize = 0;              // To store the size of an array
    int *ptr = NULL;            // To store the address of an array
    int iCnt = 0;               // Loop Counter
    float fRet = 0.0f;

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

    fRet = Average(ptr,iSize);            // Demo(400,4)
    printf("Average is : %f",fRet);

    // Step 6 - Deallocate the memory of an array
    free(ptr);

    return 0;                   // return success to the OS
}