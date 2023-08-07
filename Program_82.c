#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[], int iLength)
{
    // Step 5
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
    Fun(ptr,iSize);

    // 6
    free(ptr);

    return 0;
}