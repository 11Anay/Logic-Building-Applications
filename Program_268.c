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

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));                 // 1

    newn -> data = No;                                  // 2
    newn -> next = NULL;

    if(*Head == NULL)                                   // 3
    {
        *Head = newn;                                   // 4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                       // LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)        // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                    // LL contains more than one node
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)                           // LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)            // LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                                        // LL contains more than one node
    {
        while(temp -> next -> next != NULL)     // TYPE 3
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);                             // Calculate length of LL

    PNODE newn = NULL;
    PNODE temp = *Head;
    int iCnt = 0;

    //  Filter
    if(( iPos < 1 ) || ( iPos > iLength + 1))           // Invalid Position
    {
        printf("Invalid Position.");
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(Head,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));                 // 1

        newn -> data = No;                                  // 2
        newn -> next = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        // Sequence is important
        newn -> next = temp -> next;
        temp -> next = newn;

    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);                             // Calculate length of LL

    PNODE temp = *Head;
    PNODE tempX = NULL;
    int iCnt = 0;

    //  Filter
    if(( iPos < 1 ) || ( iPos > iLength))           // Invalid Position
    {
        printf("Invalid Position.");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; ++)
        {
            temp = temp -> next;
        }

        tempX = temp -> next;

        // Sequence is important
        temp -> next = temp -> next -> next;
        free(tempX);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    printf("Insert last elements are : \n");

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    printf("Insert First elements are : \n");

    InsertFirst(&First,10);
    InsertFirst(&First,20);

    Display(First);

    printf("Insert at Position elements are : \n");

    InsertAtPos(&First, 25, 5);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
    
    printf("Delete at Position elements are : \n");

    DeleteAtPos(&First ,5);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    printf("Delete first elements are : \n");
    
    DeleteFirst(&First);
    DeleteFirst(&First);
    
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    printf("Delete last elements are : \n");

    DeleteLast(&First);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}