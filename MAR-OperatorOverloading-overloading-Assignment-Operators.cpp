#include<iostream>
using namespace std;


class Test
{
    int* x;

public:

    Test(int val = 0 ) : x(new int(val)) { }

   Test& operator = (const Test& rhs) // called like lhs.operator(rhs) : this will conatain the address of left side object
    {
        if(this != &rhs)
            *x = *(rhs.x);
        return *this; // just to suuport chaing t1=t2=t3...
    }

    void setx(int v)
    {
        *x = v;
    }

    void getx()
    {
        cout<<*x<<endl;
    }


    ~Test(){
      delete x;
    }
};



int main()
{
    Test t1(10);
    Test t2;
    t2 = t1;           //does not work for Test t3 = t1 as t3is newly created obj it will call copy cot() not the assignment opr()
    t1.setx(100);
    t1.getx();
    t2.getx();


}

