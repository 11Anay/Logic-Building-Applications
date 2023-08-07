#include<iostream>
using namespace std;

template <class T>

//Call By Address
void Swap(T *No1, T *No2)
{
    T Temp;
    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;
}

int main()
{
    int X = 10, Y = 11;
    Swap(&X,&Y);

    cout<<"Data after swapping is : "<<"\n";
    cout<<"Value of X is : "<<X<<"\n";
    cout<<"Value of Y is : "<<Y<<"\n";

    double X1 = 10.11, Y1 = 11.21;
    Swap(&X1,&Y1);

    cout<<"Data after swapping is : "<<"\n";
    cout<<"Value of X1 is : "<<X1<<"\n";
    cout<<"Value of Y1 is : "<<Y1<<"\n";

    return 0;
}