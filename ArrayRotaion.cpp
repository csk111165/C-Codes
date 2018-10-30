#include<iostream>
using namespace std;



void rotate1ByOne(int arr[],int n){
int temp=arr[0];

for(int i=0;i<n-1;i++){

    arr[i]=arr[i+1];
}
arr[n-1]=temp;

}




void ArrayRotation(int arr[],int n,int d){

for(int i=0;i<d;i++){

     rotate1ByOne(arr,n);
}
}


void printArray(int arr[],int n){

for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}
}



int main(){
int arr[]={1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int d=2;
cout<<"Original Array"<<endl;
printArray(arr,n);

cout<<"\nAfter Array Rotation by 2"<<endl;
ArrayRotation(arr,n,d);
printArray(arr,n);
return 0;
}
