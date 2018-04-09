#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,sa,sb;
    cin>>a>>b;
    sa=a;
    sb=b;
    for(int i=0;i<n;i++)
    {
        int n1;
        cin>>n1;
        sa+=n1;
    }
    for(int i=0;i<n;i++)
    {
        int n2;
        cin>>n2;
        sb+=n2;
    }
    if(sa>sb)
    {
        cout<<"1"<<endl;
    }
    else if(sb>sa)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
   return 0;
}
