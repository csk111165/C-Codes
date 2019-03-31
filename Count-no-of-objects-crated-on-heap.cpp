#include<iostream>
using namespace std;


class Base
{


public:
    static int x ;
    Base()
    {

    }

    ~Base()
    {

    }

    //overloading the new operetor
    void* operator new(size_t sz)
    {
        x++;
    }



};

int Base::x =0;


int main()
{


    Base b; //created on stack
    Base* c = new Base;//crerated on heap
    Base* d = new Base;//created on heap

cout<<"Objects Count in Heap : \n"<<Base::x<<endl;
}
