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
void Swap(double &No1, double &No2)
{
    double Temp;
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
    
    double A = 10.11, B = 11.21;
    Swap(A,B);

    cout<<"Data after swapping is : "<<"\n";
    cout<<"Value of A is : "<<A<<"\n";
    cout<<"Value of B is : "<<B<<"\n";

    return 0;
}