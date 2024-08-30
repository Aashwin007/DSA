#include<iostream>
using namespace std;

int main()
{
    string s;  //input string
    cin>>s;

    //precompute 

    int hash[26]={0}; //delaring all elements to 0

    for(int i=0 ; i<s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
// let s[4] (e) since 0=1 so ,  e-a = 4-0 =4 or 69-65=4(ascii) 
// therefore if occurance of e gets++ 
// if next time e occurs then it gets incremented to 2
// similarly if b occurs then by the ssame method gets the value 1 and so on

    int q;
    cin>>q; // input the size of the search 

    while(q--)
    {
        char c;
        cin>>c;

        //fetch 
        cout<<hash[c - 'a'] <<"\n";

    }

    return 0;

}