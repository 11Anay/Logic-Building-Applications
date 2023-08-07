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
{}
void SinglyLL :: DeleteLast()
{}
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
    cout<<"Inside Constructor.\n";
    First = NULL;
    iCount = 0;
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
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

    obj2.InsertFirst(20);
    obj2.InsertFirst(10);

    obj2.InsertLast(30);

    obj2.Display();
    iRet = obj2.Count();

    cout<<"Number of the elements in the Linked List are : "<<iRet<<"\n\n";

    return 0;
}