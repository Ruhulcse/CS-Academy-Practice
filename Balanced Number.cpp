#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string a="0123456789";
    if(s==a)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
