#include<bits/stdc++.h>
using namespace std;


void MoveAllNegativeToEnd(int arr[] , int n)
{
    int temp[n],j=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 0 )
            temp[j++] = arr[i];
    }


    if(j==n || j == 0 )
        return ; //return if all elements are positive

    for(int i=0 ; i < n ;i++)
    {
        if(arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }

  memcpy(arr,temp,sizeof(temp));//memecpy(dest,src,size in bytes);
}



void PrintArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


int main()
{
    int arr[] = {1,-1,2,3,-4,-5,6,-7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nOriginal Array : \n";
    PrintArray(arr,n);

    cout<<"\nMove All -Ve Numbers To End : \n";
    MoveAllNegativeToEnd(arr,n);
    PrintArray(arr,n);




    return 0;
}
