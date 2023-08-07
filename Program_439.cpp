#include<iostream>
using namespace std;

// Structure for Singly Linear & Singly Circular
template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

// Structure for Doubly Linear & Doubly Circular
template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

// class of SinglyLL
template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> *head;
        int iCount;
};

// class of SinglyCL
template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *head;
        struct NodeS<T> *tail;
        int iCount;
};

// class of DoubleLL
template <class T>
class DoubleLL
{
    public:
        struct NodeD<T> *head;
        int iCount;
};

// class of DoubleCL
template <class T>
class DoublyCL
{
    public:
        struct NodeS<T> *head;
        struct NodeS<T> *tail;
        int iCount;
};

// Logic of 32 functions
int main()
{


    return 0;
}