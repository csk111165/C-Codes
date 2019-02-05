#include<bits/stdc++.h>
using namespace std;

/*
To Find the missing characters to make the string panargam:

A String is panargam if it contains all the alphabates in it

*/

string MissingCharactersToMakeStringPanargam(string str)
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
    string res = "";
    for(int i=0;i<26;i++)
    {
        if(visited[i] == false)
            res.push_back((i+'a'));
    }

    return res;
}


int main()
{
    string str = "chandra";
    cout<<"Missing Characters Required To Make The String Panargam : "<<MissingCharactersToMakeStringPanargam(str);


    return 0;
}
