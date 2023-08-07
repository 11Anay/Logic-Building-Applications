/*
Program_208.cpp
*/

#include<iostream>
using namespace std;

class Number
{
    private :
        int iNo1;
        int iNo2;

    public:
        Number(int X, int Y)
        {
            iNo1 = X;
            iNo2 = Y;
        }

        int MaxNumber()
        {
            if(iNo1 > iNo2)
            {
                return iNo1;
            }
            else 
            {
                return iNo2;
            }
        }
};


int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2);

    iRet = nobj.MaxNumber();

    cout<<"Maximum number is : "<<iRet<<"\n";

    return 0;
}