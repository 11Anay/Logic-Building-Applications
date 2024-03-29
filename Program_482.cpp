#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BidirectionalSearch(T);
        bool BinarySearch(T);
        bool CheckSorted(T);
};

template <class T>
ArrayX<T> :: ArrayX(int iNo)
{
    this -> iSize = iNo;
    this -> Arr = new T[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the elements : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of an array are : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
bool ArrayX<T> :: LinearSearch(T No)
{
    bool flag = false;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BidirectionalSearch(T No)
{
    bool flag = false;
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BinarySearch(T no)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    iStart = 0;
    iEnd = iSize - 1;
    bool flag = false;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;
        if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iMid] == no))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid] < no)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > no)
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: CheckSorted(T no)
{
    int iCnt = 0;
    bool flag = false;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt + 1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    return flag;
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the size of an array : \n";
    cin>>iValue;

    ArrayX <int> *obj = new ArrayX <int> (iValue);

    obj -> Accept();
    obj -> Display();

    bRet = obj -> CheckSorted(iValue);
    if(bRet == true)
    {
        cout<<"Array is sorted \n";
    }
    else
    {
        cout<<"Array is not sorted \n";
    }

    delete obj;

    return 0;
}   