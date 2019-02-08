#include<bits/stdc++.h>
using namespace std;

string LexographicallyNextString(string str)
{
    if(str == "")
        return "a";
    int i = str.length()-1;

    while(i >= 0 && str[i] == 'z')
        i--;

    if(i == -1)
        str+='a';
    else
        str[i]++;

    return str;


}


int main()
{
    string str = "abcd";
    cout<<"Original String : "<<str<<endl;;
    cout<<"Lexographically Next String : "<<LexographicallyNextString(str)<<endl;
}
