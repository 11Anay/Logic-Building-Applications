#include<iostream>
using namespace std;

void Display(int Arr[], int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}
void Display(double Arr[], int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int A[] = {11,21,51,71,101,111};
    Display(A,6);

    double B[] = {11.1,21.7,51.1,71.77,101.11,111.111};
    Display(B,6);

    return 0;
}