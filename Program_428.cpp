#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[], int Size)
{
    int iCnt = 0;
    T Sum;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int A[] = {11,21,51,71,101,111};
    int Ret1 = 0;
    Ret1 = Addition(A,6);
    cout<<"Addition is : "<<Ret1<<"\n";

    double B[] = {11.11,21.21,51.11,71.21,101.11,111.21};
    double Ret2 = 0.0;
    Ret2 = Addition(B,6);
    cout<<"Addition is : "<<Ret2<<"\n";

    return 0;
}