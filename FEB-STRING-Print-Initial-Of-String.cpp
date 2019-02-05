#include<bits/stdc++.h>
using namespace std;

/*
To Find the Initial Of a Name
eg: Chandra Shekhar Kumar ===> C S K

*/

void GetInitial(string str)
{
    //first character will be initial
    cout<<(char)toupper(str[0]);

    //loop for the remianing string and look for space if space just get the initial of the next character
    for(int i = 1 ; i < str.length() ; i++)
    {
        if(str[i] == ' ')
            cout<<" "<<(char)toupper(str[i+1]);
    }




}

int main()
{
    string str = "chandra shekhar ram";
    GetInitial(str);

    return 0 ;
}
