#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    vector<char>ch;
    for(int i=0;i<test;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        ch.push_back(s[0]);
    }
    sort(ch.begin(),ch.end());
    for(int i=0;i<test;i++)
    {
        cout<<ch.at(i);
    }
    return 0;
}
