#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;    

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"7th bit, 14th bit & 21th bit is ON"<<"\n";
    }
    else
    {
        cout<<"7th bit, 14th bit & 21th bit is OFF"<<"\n";
    }

    return 0;
}