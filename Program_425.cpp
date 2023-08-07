#include<iostream>
using namespace std;

void Display(int Arr[], int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

int main()
{
    int A[] = {11,21,51,71,101,111};

    Display(A,6);

    return 0;
}