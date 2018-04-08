#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>number;
    set<int>element;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        number.push_back(a);
        element.insert(a);
    }
    vector<int>uniqe(element.begin(),element.end());
    int cnt=0;
    for(int i=0;i<element.size();i++)
    {
        int t=count(number.begin(),number.end(),uniqe.at(i));
        if(t>=k)
        {
            cnt++;
        }
    }
  cout<<cnt<<endl;
    return 0;
}
