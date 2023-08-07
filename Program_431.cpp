#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX();
        void Accept();
        void Display();

};

void ArrayX :: ArrayX(int length)
{
    Size = length;
    Arr = new int[Size];
}

void ArrayX :: Accept()
{
    cout<<"Enter the elements of an array : \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"Elements of an array are : \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    ArrayX obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}