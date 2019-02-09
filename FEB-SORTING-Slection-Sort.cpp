#include<iostream>
using namespace std;

/*
Selection Sort algo basically in each iteration move the smallest element to its respective position

*/



void SwapElement(int& a,int& b)
{
    int t = a;
    a=b;
    b=t;
}


void SelelctionSort(int arr[],int n)
{
    int i,j,min_idx;

    for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for(j= i+1 ; j < n ; j++)
        {
            if(arr[j]  < arr[min_idx])
                min_idx = j;
        }
        SwapElement(arr[i],arr[min_idx]);
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

    cout<<"\nSorted Array : Using Selection Sort Algorithm\n";
    SelelctionSort(arr,n);
    PrintArray(arr,n);



    return 0;
}
