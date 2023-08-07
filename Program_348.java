// Approach 2

import java.util.*;

class Program_348
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();
        
        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        System.out.println("Summation of all elements : "+mobj.Summation());
        
        sobj.close();
    }
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the elements : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Elements of the array are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int Summation()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}