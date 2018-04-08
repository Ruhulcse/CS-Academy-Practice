#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    cin>>n;
    cnt=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num%2==0)
        {
            cnt+=1;
        }
    }
    cout<<(n-cnt)*cnt<<endl;
    return 0;
}
