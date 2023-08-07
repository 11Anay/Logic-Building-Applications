#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE;

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

void SinglyLL :: InsertAtPos(int no, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position.\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        
        PNODE newn = new NODE;
        newn -> data = no;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;

        iCount++;
    }
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position.\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;
        temp -> next = temp -> next -> next;

        delete tempX;

        iCount--;
    }
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;

    cout<<"Marvellous Linked List Application.\n";

    while(1)
    {
        cout<<"---------------------------------------------------------------------------------------------------\n";
        cout<<"Please enter your choice : \n\n";

        cout<<"1 : Insert node at First position.\n";
        cout<<"2 : Insert node at Last position.\n";
        cout<<"3 : Insert node at the Given position.\n";
        cout<<"4 : Delete node from First position.\n";
        cout<<"5 : Delete node from Last position.\n";
        cout<<"6 : Delete node from the Given position.\n";
        cout<<"7 : Display the elements of the Linked List.\n";
        cout<<"8 : Count the number of Nodes from the Linked List.\n";
        cout<<"9 : Terminate the appplication.\n";

        cin>>iChoice;

        cout<<"---------------------------------------------------------------------------------------------------\n";

        switch(iChoice)
        {
            case 1 : 
                cout<<"Enter the value you want to insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;      

            case 2 : 
                cout<<"Enter the value you want to insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;   

            case 3 : 
                cout<<"Enter the value you want to insert : \n";
                cin>>iValue;

                cout<<"Enter the position : \n";
                cin>>iPos;

                obj.InsertAtPos(iValue,iPos);
                break;

            case 4 : 
                obj.DeleteFirst();
                break;
            
            case 5 : 
                obj.DeleteLast();
                break;
            
            case 6 : 
                cout<<"Enter the position : \n";
                cin>>iPos;

                obj.DeleteAtPos(iPos);
                break;

            case 7:
                obj.Display();
                break;
            
            case 8:
                cout<<"Number of elements are : "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank you for using the application.\n"; 
                return 0;

            default :
                cout<<"Invalid choice.\n";
                break;
        }
    }
    

    return 0;
}