#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;        // Characteristics
        int iCount;         // Characteristics

    public : 
        SinglyLL();
        ~SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new Node;       // newn = (PNODE)malloc(sizepf(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)       // LL is empty
    {
        First = newn;
    }
    else                    // LL is not empty
    {   
        newn -> next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new Node;       // newn = (PNODE)malloc(sizepf(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(First == NULL)       // LL is empty
    {
        First = newn;
    }
    else                    // LL is not empty
    {   
        PNODE temp = First;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL :: InsertAtPos(int no, int iPos)
{}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)                   // Empty LL 
    {
        return;
    }
    else if(First -> next == NULL)      // Single Node in LL
    {
        delete First;                   // free(First) in C
        First = NULL;
    }
    else                                // More than one Node
    {
        PNODE temp = First;

        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)                   // Empty LL 
    {
        return;
    }
    else if(First -> next == NULL)      // Single Node in LL
    {
        delete First;                   // free(First) in C
        First = NULL;
    }
    else                                // More than one Node
    {
        PNODE temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{
    PNODE temp = First;

    cout<<"Elements of the Linked List are : "<<"\n";

    while(temp != NULL)
    {
        cout<<"| "<<temp -> data<<" |  ->  ";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
    return iCount;
}

SinglyLL :: SinglyLL()          // Constructor
{
    cout<<"Inside Constructor.\n\n";
    First = NULL;
    iCount = 0;
}
SinglyLL :: ~SinglyLL()          // Constructor
{
    cout<<"Inside Destructor.\n";
}

int main()
{
    SinglyLL obj1;
    int iRet = 0;

    // Error
    // cout<<"Size of Linked List is : "<<obj1.iCount;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1. InsertLast(101);
    obj1. InsertLast(111);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of the elements in the Linked List are : "<<iRet<<"\n\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of the elements in the Linked List are : "<<iRet<<"\n\n";

    return 0;
}