#include<iostream>
using namespace std;


class Point
{
    int x,y;

public:
    Point(int x = 0 , int y = 0 ) : x(x),y(y) { }

    friend istream& operator >>( istream& in ,  Point& obj);
    friend ostream& operator <<( ostream& out ,  Point& obj);


};

 istream& operator >>( istream& in ,  Point& obj)
 {
     in >> obj.x >> obj.y;
    // in >> obj.y;
     return in;
 }

  ostream& operator <<( ostream& out ,  Point& obj)
  {
      out<<obj.x<<" "<<obj.y<<endl ;
      //out<<obj.y;
      return out;
  }

int main()
{

    Point p;
    cout<<"give x and y value\n";
    cin>>p;
    cout<<"\nYou've entered :\n";
    cout<<p;

}




