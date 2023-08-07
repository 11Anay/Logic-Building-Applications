#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    // Step 5
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0;
    int *ptr = NULL;
    int iCnt = 0;

    // 1
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // 2
    ptr = (int*)malloc(iSize * sizeof(int));

    // 3
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // 4
    iRet = Maximum(ptr,iSize);
    printf("Maximum number is : %d",iRet);

    // 6
    free(ptr);

    return 0;
}