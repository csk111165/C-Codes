#include<iostream>
using namespace std;

//--------------------------------------------------
// Rotate Each Elemet by 1
//--------------------------------------------------

void RotateLeftBy1(int arr[] , int n)
{
    int temp = arr[0];
    int i;
    for( i = 0 ; i < n-1 ; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[i] = temp;

}



void LeftArrayRotation(int arr[] ,int n ,int d)
{
    for(int i = 0 ; i < d ; i++)
    {
        RotateLeftBy1(arr,n);
    }


}

//--------------------------------------------------
//              Print The Array
//--------------------------------------------------

void PrintArray(int arr[],int n)
{

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}




int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int no_of_times = 2;

    cout<<"\n Origianal Array : \n";
    PrintArray(arr,n);

    LeftArrayRotation(arr,n,no_of_times);

    cout<<"\nAfter Array Rotation :\n";
    PrintArray(arr,n);



    return 0;
}
