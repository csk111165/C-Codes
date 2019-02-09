#include<iostream>
using namespace std;

/*
Insertion Sort
*/

void SwapElement(int& a,int& b)
{
    int t = a;
    a=b;
    b=t;
}

void InsertionSort(int arr[],int n)
{
    for(int i=1 ;i < n ;i++)
    {

        int key = arr[i];
        int j = i-1;
        while( j >= 0 &&  arr[j] > key)
        {

                arr[j+1] = arr[j];
                j--;
        }
       arr[j+1]=key;

    }
}


void PrintArray(int arr[],int n)
{
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}


int main()
{
    int arr[] = {5,3,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nUnsorted Array : \n";
    PrintArray(arr,n);

    cout<<"\nSorted Array : Using Insertion Sort Algorithm\n";
    InsertionSort(arr,n);
    PrintArray(arr,n);



    return 0;
}

