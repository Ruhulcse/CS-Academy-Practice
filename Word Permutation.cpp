#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<pair<string,int> >p;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        p.push_back(make_pair(s,i));
    }
   sort(p.begin(),p.end());
   for(int i=0;i<t;i++)
   {
       cout<<p.at(i).second<<endl;
   }
   return 0;
}
