#include<bits/stdc++.h>
using namespace std;

class DateClass{
public:
int day;
int month;
int year;


    void print(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    }




};




int main(){

DateClass d ={12};//or directly we can use DateClass d{16,12,2018}
d.month=6;
d.year=2016;
d.print();





return 0;
}
