#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        s.push_back(a);
    }
    map<string,int>m;
    int best=0;
    for(int i=0;i<n;i++)
    {
        m[s.at(i)]+=1;
        best=max(best,m[s.at(i)]);
    }
    cout<<best<<endl;
    return 0;
}
