#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iLength)
{
    // Step 5
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum number is : %d\n",iMax);
    printf("Minimum number is : %d\n",iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // 4
    MaxMin(ptr,iSize);

    // 6
    free(ptr);

    return 0;
}