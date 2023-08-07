#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;          // #
}NODE, *PNODE, **PPNODE;


void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;        // #

    if(*Head == NULL)           // LL is empty
    {
        newn = *Head;
    }
    else                        // LL contains atleast one node
    {
        (*Head) -> prev = newn;
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;        // #

    if(*Head == NULL)           // LL is empty
    {
        newn = *Head;
    }
    else                        // LL contains atleast one node
    {

    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{}

void Count(PNODE Head)
{}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}