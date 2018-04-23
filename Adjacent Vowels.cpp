#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<char>ch;
  ch.insert('a');
  ch.insert('e');
  ch.insert('i');
  ch.insert('o');
  ch.insert('u');
  int n;
  string s;
  cin>>n>>s;
  int ans=0;
  for(int i=0;i<s.size();i++)
  {
      if(ch.find(s[i])!=ch.end()&&ch.find(s[i+1])!=ch.end())
        ans++;
  }
  cout<<ans<<endl;
}
