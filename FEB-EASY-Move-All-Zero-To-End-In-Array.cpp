#include<iostream>
using namespace std;


void MoveAllZeroToEnd(int arr[],int n)
{
    int i;
    int cnt=0;
    for(i=0;i<n;i++){

        if(arr[i] != 0)
            arr[cnt++] = arr[i];
}

while(cnt < n)
    arr[cnt++] = 0;


}

void PrintArray(int arr[] ,int n)
{


    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
}



int main()
{
    int arr[] = {1,0,0,2,3,0,4,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nOriginal Array : \n";
    PrintArray(arr,n);

    cout<<"\nMoving All Zeroes To The End : \n";
    MoveAllZeroToEnd(arr,n);
    PrintArray(arr,n);


    return 0;
}
