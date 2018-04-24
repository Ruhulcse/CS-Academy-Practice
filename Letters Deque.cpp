#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    deque<char>d;
    deque<char>::iterator it;
    while(test--)
    {
        int a;
        char c;
        cin>>a>>c;
        if(a==0)
        {
            d.push_front(c);
        }
        else
        {
            d.push_back(c);
        }
    }
    for(it=d.begin();it!=d.end();it++)
    {
        cout<<*it;
    }

    return 0;
}
