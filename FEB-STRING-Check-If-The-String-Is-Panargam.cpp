#include<bits/stdc++.h>
using namespace std;

/*
To Check if string is panargam:

A String is panargam if it contains all the alphabates in it

*/

bool IsStringPanargam(string str)
{
    vector<bool> visited(26,false);
    int index;
    for(int i=0;i<str.length();i++)
    {
        //to handle the lowercase letters
        if(str[i] >= 'a' && str[i] <= 'z')
            index = str[i]-'a';

        //to handle the upper case letters
        else if(str[i] == 'A' && str[i] <= 'Z')
            index = str[i]-'A';

        //index basically shows the number between 1..26 if 'a' then index =1 : 'b' --> index =2
        visited[index] = true;

    }

    for(int i=0;i<26;i++)
    {
        if(visited[i] == false)
            return false;
    }

    return true;
}


int main()
{
    string str = "the quick brown fox jumps over the lazy dog";
    if(IsStringPanargam(str))
    cout<<"String is panargam!!!\n";
    else
        cout<<"String is not Panargam!!!\n";

    return 0;
}
