#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;          // #
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{}

void InsertLast(PPNODE Head, int No)
{}

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

    return 0;
}