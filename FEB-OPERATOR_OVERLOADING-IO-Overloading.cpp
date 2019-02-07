#include<iostream>
using namespace std;

/*
Program to overload io(<< and >>) operator
Author:Chandra
*/


class Point
{
    int m_x,m_y,m_z;

public:

    Point(int x=0,int y=0,int z=0):m_x(x),m_y(y),m_z(z)
    {

    }

    friend istream& operator>>(istream& in , Point& pt)
    {
       // in>>pt.m_x>>pt.m_y>>pt.m_z; This is also allowed
        in>>pt.m_x;
        in>>pt.m_y;
        in>>pt.m_z;
        return in;
    }

    friend ostream& operator<<(ostream& out , const Point& pt)
    {
        out<<"Point("<<pt.m_x<<" , "<<pt.m_y<<" , "<<pt.m_z<<" )\n";
    }



};

int main()
{
    Point p1(1,2,3);
    cout<<p1;
    Point p3;
    cin>>p3;
    cout<<p3;


    return 0;
}



