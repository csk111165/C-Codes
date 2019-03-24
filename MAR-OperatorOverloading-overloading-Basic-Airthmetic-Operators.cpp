#include<iostream>
using namespace std;

class Point
{
    int x,y;
public:

    Point(int x = 0 , int y = 0 ) : x(x),y(y) { }

    Point operator + (const Point& rhs)
    {
        Point p ;
        p.x = x + rhs.x ; // can also be written as this->x+rhs.x
        p.y = y + rhs.y;

        return p;

    }

    Point operator - (const Point& rhs)
    {
        Point p ;
        p.x = x - rhs.x ; // can also be written as this->x+rhs.x
        p.y = y - rhs.y;

        return p;

    }

    Point operator * (const Point& rhs)
    {
        Point p ;
        p.x = x * rhs.x ; // can also be written as this->x+rhs.x
        p.y = y * rhs.y;

        return p;

    }
     Point operator / (const Point& rhs)
    {
        Point p ;
        p.x = x / rhs.x ; // can also be written as this->x+rhs.x
        p.y = y / rhs.y;

        return p;

    }
       Point operator % (const Point& rhs)
    {
        Point p ;
        p.x = x % rhs.x ; // can also be written as this->x+rhs.x
        p.y = y % rhs.y;

        return p;

    }
    //overloading unary  operator
      Point operator - ()
    {


        return Point(-x,-y);

    }
    void disp()
    {
        cout<<"x : "<<x <<"  y: "<<y<<endl;
    }
};


int main()
{

    Point p1(1,3),p2(2,4);
    Point p3 = p1 + p2;
    Point p4 = p1-p2;
    Point p5 = p1 * p2;
    Point p6 = p1 / p2;
    Point p7 = p1 % p2;

    p1.disp();
    p2.disp();
    p3.disp();
    p4.disp();
    p5.disp();
    p6.disp();
    p7.disp();

    //unary
    Point p8 = -p1;
    p8.disp();



}













