#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double A = 90.7, B = 78.9, Ret = 0.0;

    Ret = Addition(A,B);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}
