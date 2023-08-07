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

// Implementations of all behaviours

/*
    return_value class_name :: function_name(parameter_list)
    {
        function_body;
    }
*/

void SinglyLL :: InsertFirst(int no)
{}
void SinglyLL :: InsertLast(int no)
{}
void SinglyLL :: InsertAtPos(int no, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return 0;
}

SinglyLL :: SinglyLL()
{}

int main()
{
    SinglyLL obj1;

    return 0;
}