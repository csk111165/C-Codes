#include<bits/stdc++.h>
using namespace std;

/*

Program to illustrate  the use of overloaded asssignment operator and copy constructor:
pay attention while defining the << overloaded operator

a << b is interpreted as a.operator<<(b)
*/



class Fraction
{
    int m_nr,m_dr;

public:
    Fraction(int nr=0,int dr=0) : m_nr(nr),m_dr(dr)
    {
       cout<<"Default Cot called\n";
    }

    Fraction(const Fraction& fr) : m_nr(fr.m_nr) , m_dr(fr.m_dr)
    {
        cout<<"Copy Cot  is called\n";
    }

    Fraction& operator =(const Fraction& fr)

    {   cout<<"Assignment Operator is called\n";
        m_nr = fr.m_nr;
        m_dr = fr.m_nr;
        return *this;
    }

    friend ostream& operator<<(ostream& out , const Fraction& fr)
    {
        out<<fr.m_nr<<" / "<<fr.m_dr<<endl;
        return out;
    }

};






int main()
{
    Fraction f (12,13);
    cout<<f;
    Fraction g = f ;
    cout<<g;
    Fraction a(10,10);
    Fraction b;
    b=a;
    cout<<b<<endl;
}

