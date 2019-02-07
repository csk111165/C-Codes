#include<iostream>
using namespace std;


class Mystring
{

    char* m_str;
    int m_len;

    public:

    Mystring(const char* str ="" , int len = 0) : m_len(len)
    {

        cout<<"Default Cot is called\n";
        if(len == 0 )
        m_str = NULL;

        else
        {
            m_str = new char[len];//or new char[m_len]

            for(int i=0;i<len;i++)
                m_str[i] = str[i];
        }

    }

    Mystring(const Mystring& obj)  : m_str(obj.m_str) , m_len(obj.m_len)
    {
        cout<<"copy cot() is called \n";
    }
    //overloading assignment operator
    Mystring& operator=(const Mystring& obj)
    {    //chrck for self assignment
        if(this == &obj)
            return *this;

         m_str = obj.m_str;
         m_len = obj.m_len;

        return *this;

    }


 friend ostream& operator<<(ostream& out, const Mystring& str)
   {
       out<<str.m_str<<endl;
       return out;
   }

};
int main()
{
    Mystring s ("chandra",7);
   // cout<<s;

   Mystring t = s;
   t=t;
   cout<<t<<endl;

}


