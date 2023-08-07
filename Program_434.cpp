#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int);
        void Accept();
        void Display();
        int Maximum();

};

template <class T>
ArrayX<T> :: ArrayX(int length)
{
    Size = length;
    Arr = new T[Size];
}

template <class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the elements of an array : \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of an array are : \n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

template <class T>
int ArrayX<T> :: Maximum()
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    ArrayX<int> obj1(5);
    obj1.Accept();
    obj1.Display();
    int Ret = 0;
    Ret = obj1.Maximum();
    cout<<"Maximum is : "<<Ret<<"\n";

    ArrayX<double> obj2(5);
    obj2.Accept();
    obj2.Display();
    double Ret2 = 0.0;
    Ret2 = obj2.Maximum();
    cout<<"Maximum is : "<<Ret2<<"\n";

    return 0;
}