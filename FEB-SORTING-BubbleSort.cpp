#include<iostream>
using namespace std;

/*
Bubble Sort algo basically in each pass ie n-1 : it places a greatest element at the endinner loop n-i-1 , outer loop n-1

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

    for(i=0;i<n-1;i++)
    {
        for(j= 0; j < n-i-1 ; j++)
        {
            if(arr[j]  > arr[j+1])
            SwapElement(arr[j],arr[j+1]);
        }

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

    cout<<"\nSorted Array : Using Bubble Sort Algorithm\n";
    BubbleSort(arr,n);
    PrintArray(arr,n);



    return 0;
}
