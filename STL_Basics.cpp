#include<bits/stdc++.h>
using namespace std;


void SetDemo()
{
cout<<"\nSet Demo Starts \n";
    set<int > s;
    s.insert(1);
     s.insert(1);
      s.insert(-1);
       s.insert(0);
       s.insert(3);
       s.insert(4);


//set automatically maintains the sorted order  and the elements are unique : o/p : -1 0 1

cout<<"\nElement Inside the set :\n";

for(auto x : s)
{
    cout<<x<<" ";
}
cout<<"\n";

//finding the element in the set if peresent or not

auto it  = s.find(-1);
//cout<<"it is : "<<*it <<endl;
if(it == s.end())
    cout<<"Element is Not Present\n";
else
    cout<<"Element Present\n";


    //since set is alredy sorted the api upper_bound and lower_bound exposed directly to set

//set conatians : -1 0 1 3 4
auto it1 = s.lower_bound(1); //returns itr where num >= givne nu,
auto it2 = s.upper_bound(3); //returns iterator where num > given num
cout<<*it1<<endl;
cout<<*it2<<endl;




cout<<"\nSet Demo Ends \n";
}

void VectorDemo()
{
    cout<<"\nVector Demo Starts \n";
     vector<int > v;

   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(100);
   v.push_back(100);
   v.push_back(300);

   //display the content:
//
//   for(auto i : v)
//    cout<<i<<" ";
//

//binary_search
//
//bool ispresent = binary_search(v.begin(),v.end(),3000);
//if(ispresent)
//    cout<<"yes element is there!\n";
//else
//    cout<<"No! , elment is not there\n";



//lower_bound : >=
//upper_bound : >
auto it1 = lower_bound(v.begin(),v.end(),100); //returns iterator for the first element >= that element
auto it2 = upper_bound(v.begin(),v.end(),100); // returns the element strictly greater than ( > ) than the element
cout<<*it1<<endl;
cout<<*it2<<endl;

cout<<"Number of 100 in the vector : "<<(it2 - it1)<<endl;



 cout<<"\nVector Demo Ends \n";
}


void MapDemo()
{

cout<<"\nMap Demo Starts \n";
    map<char,int > m;
    string s = "chandrashekhar";

    for(char x : s)
        m[x]++;

    //lets see the content inside the map
    for(auto it : m)
        cout<<it.first<<"=====>"<<it.second<<endl;

cout<<"\nMap Demo Ends \n";
}





int main()
{




//Lets move to set STL now!
VectorDemo();
SetDemo();
MapDemo();













}
