#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    
    // AVOID THIS LOGIC (SEGMENTATION FAULT)!
    if(Arr[iCnt] == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;

    // 1
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // 2
    ptr = (int*)malloc(iSize * sizeof(int));

    // 3
    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // 4
    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",iValue);
    }

    // 6
    free(ptr);

    return 0;
}