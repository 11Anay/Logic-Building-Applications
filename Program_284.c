#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));                 // 1

    newn -> data = No;                                  // 2
    newn -> next = NULL;

    if(*Head == NULL)                                   // 3
    {
        *Head = newn;                                   // 4
    }
    else
    {
        newn -> next = *Head;                           // 5
        *Head = newn;                                  // 6
    }
}

void Display(PNODE Head)
{
    printf("Elements of the LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d |  ->  ",Head -> data);
        Head = Head -> next;
    }
    printf("| NULL |\n");
}

void SumDigits(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iDigit = 0;

    while(Head != NULL)
    {
        iNo = Head -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);

        iSum = 0;
        Head = Head -> next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    SumDigits(First);
    
    return 0;
}