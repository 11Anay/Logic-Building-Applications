#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int Size)
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
    int A[] = {11,21,51,71,101,111};
    int Ret1 = 0;
    Ret1 = Maximum(A,6);
    cout<<"Maximum is : "<<Ret1<<"\n";

    double B[] = {11.11,21.21,51.11,71.21,101.11,111.21};
    double Ret2 = 0.0;
    Ret2 = Maximum(B,6);
    cout<<"Maximum is : "<<Ret2<<"\n";

    return 0;
}