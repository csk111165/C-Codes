#include<bits/stdc++.h>
using namespace std;

/*
To Shuffle the array elements

use of srand(time(NULL)) : to get different set of random values
https://stackoverflow.com/questions/1108780/why-do-i-always-get-the-same-sequence-of-random-numbers-with-rand

*/


//swap the elements
void SwapTwoElement(int& a, int& b)
{
    int t = a;
    a=b;
    b=t;
}

// Shuffle The Array
void ShuffleTheArray(int arr[] , int n)
{
     // Use a different seed value so that we don't get same
    // result each time we run this program
    srand(time(NULL));

    for(int i=n-1; i>=0 ;i--)
    {
        int j = rand() % (i+1); // remebmer % n means values from o to n-1 to get n value as well we did j+1
        SwapTwoElement(arr[i],arr[j]);
    }



}

//print the array element
void PrintArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
   int arr[] = {1,2,3,4,5,6};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"\nOriginal Array : \n";
   PrintArray(arr,n);
   ShuffleTheArray(arr,n);

   cout<<"\nShuffeld Array : \n";
   PrintArray(arr,n);

    return 0;
}
