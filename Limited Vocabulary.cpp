#include<bits/stdc++.h>
using namespace std;
int main()
{
   //ifstream cin("input.in");
   //ofstream cout("output.out");
   ios::sync_with_stdio(0);cin.tie(0);
   long N,M=-1,K;
   string S;
   cin>>N>>K;
   while(N--){
      cin>>S;
      long L=S.size();
      set<char> P;
      for(long i=0;i<L;i++)
         P.insert(S[i]);
      if(P.size()<=K){
         // /cout<<P.size()<<" ";
         M=max(M,L);
      }
   }
   cout<<M;
}
