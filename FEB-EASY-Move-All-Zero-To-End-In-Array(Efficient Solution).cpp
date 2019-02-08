#include<bits/stdc++.h>
using namespace std;

/*
   Move all zeroes to end in a single traversal
   Author: Chandra
*/

//Swap the Elements
void SwapTwoElement(int&a , int& b)
{
    int temp = a;
    a=b;
    b=temp;

}
//move all the zero to end
void MoveAllZeroToEnd(int arr[],int n)
{
   int i ,cnt=0;

   for(i=0;i<n;i++)
   {
       if(arr[i] != 0)
       SwapTwoElement(arr[cnt++],arr[i]);
   }

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
