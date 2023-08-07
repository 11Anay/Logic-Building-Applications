#include<iostream>
using namespace std;

typedef struct node
{
    public:
        int data;
        struct node *next;
        struct node *prev;

        node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }
        node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }
}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int ino, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

int main()
{

    return 0;
}