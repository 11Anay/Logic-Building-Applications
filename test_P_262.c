#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newnode = NULL;

    newnode = (PNODE)malloc(sizeof(NODE));

    newnode -> data = No;
    newnode -> next = NULL;

    if(*Head == NULL)
    {   
        *Head = newnode;
    }
    else
    {
        newnode -> next = *Head;
        *Head = newnode;
    }

}

void InsertLast(PPNODE Head, int No)
{
    PNODE newnode = NULL;
    PNODE temp = *Head;

    newnode = (PNODE)malloc(sizeof(NODE));
    
    newnode -> data = No;
    newnode -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newnode;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newnode;
    }
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

void Display(PNODE Head)
{
    printf("Elements of the Linked List are : \n");

    while(Head != NULL)
    {
        printf(" | %d | ->  ",Head -> data);
        Head = Head -> next;
    }

    printf("NULL \n");
}   

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,2001);
    InsertFirst(&First,06);
    InsertFirst(&First,1);
    
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,07);
    InsertLast(&First,07);
    InsertLast(&First,1981);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}