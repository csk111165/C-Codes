#include<iostream>
using namespace std;

class Point
{
    int arr[2] ; // to store x and y value in 2d plane of point

public:
    Point(int x =0 , int y = 0)
    {
        arr[0] = x;
        arr[1] = y;
    }

    int& operator [](int pos)// we should return by reference as the value should be updated permanaently
    {
        if(pos == 0)
            return arr[0];
        else if(pos == 1)
            return arr[1];
        else{
            cout<<"Array Out Of Bound.\n";
            exit(0);
        }

    }

    void disp()
    {
        cout<<"x: "<<arr[0] <<" y: "<<arr[1]<<endl;
    }

};

int main()
{
    Point p(1,3);
    p.disp();
    p[0] =10;
    p[1] = 20;
    p.disp();
    //p[2] = 100; array index out of bound
}





