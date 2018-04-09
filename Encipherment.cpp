#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    vector<char>c;
    for(int i=0;i<s.size();i++)
    {
        c.push_back(p[s[i]-'a']);
    }
    for(int i=0;i<c.size();i++)
    {
        cout<<c.at(i);
    }
    return 0;
}
