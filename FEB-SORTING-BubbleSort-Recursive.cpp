#include<iostream>
using namespace std;

/*
Bubble Sort : Recursive Approach
*/

void SwapElement(int& a,int& b)
{
    int t = a;
    a=b;
    b=t;
}


void BubbleSort(int arr[],int n)
{
    int i,j;
    if(n==1)
        return;
    for(i=0;i<n-1;i++)
    {


            if(arr[i]  > arr[i+1])
            SwapElement(arr[i],arr[i+1]);


    }
//recur for the remaining as in pass1 the last element is already sorted
BubbleSort(arr,n-1);
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

    cout<<"\nSorted Array : Using Bubble Sort Algorithm\n";
    BubbleSort(arr,n);
    PrintArray(arr,n);



    return 0;
}
