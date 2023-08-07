#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double A = 90.7, B = 78.9, Ret = 0.0;
    Ret = Addition(A,B);
    cout<<"Addition is : "<<Ret<<"\n";

    int X = 10, Y = 11, Ret2 = 0;
    Ret2 = Addition(X,Y);
    cout<<"Addition is : "<<Ret2<<"\n";

    float S = 10.11f, Q = 11.21f, Ret3 = 0.0f;
    Ret3 = Addition(S,Q);
    cout<<"Addition is : "<<Ret3<<"\n";

    return 0;
}