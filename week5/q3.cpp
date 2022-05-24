#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter the number of vertices and edges "<<endl;
   cin>>n>>m;   
   int adj[n+1][n+1]={0};
   for(int i=1;i<=m;i++)
   {
      int u,v;
      cin>>u>>v;
     adj[u][v]=1;
     adj[v][u]=1;
   }
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++)
      {
         cout<<adj[i][j]<<" ";
      }
      cout<<endl;
   }


}
