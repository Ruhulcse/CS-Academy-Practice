#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,r;
    cin>>p>>r;
    int T[r];
    for(int i=0;i<r;i++)
    {
        cin>>T[i];
    }
    while(p--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int i=0;i<r;i++)
        {
            if(T[i]>=a&&T[i]<=b)
            {
                sum+=1;
            }
        }
       cout<<sum<<endl;
    }
    return 0;
}
