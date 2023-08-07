#include<iostream>
using namespace std;

//Call By Reference
void Swap(int &No1, int &No2)
{
    int Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    int X = 10, Y = 11;
    Swap(X,Y);

    cout<<"Data after swapping is : "<<"\n";
    cout<<"Value of X is : "<<X<<"\n";
    cout<<"Value of Y is : "<<Y<<"\n";

    return 0;
}