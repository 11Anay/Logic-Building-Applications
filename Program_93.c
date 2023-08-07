#include<stdio.h>
#include<stdlib.h>

#define ERR_NOT_FOUND -1

int SearchLastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo);
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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
    iRet = SearchLastOcc(ptr,iSize,iValue);

    if(iRet == ERR_NOT_FOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occured at index %d\n",iValue,iRet);
    }

    // 6
    free(ptr);

    return 0;
}