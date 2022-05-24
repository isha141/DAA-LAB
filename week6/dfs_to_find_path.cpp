// Given a (directed/undirected) graph, design an algorithm and implement it using a program to
// find if a path exists between two given vertices or not. (Hint: use DFS)
// Input Format:
// Input will be the graph in the form of adjacency matrix or adjacency list.
// Source vertex number and destination vertex number is also provided as an input.
// Output Format:
// Output will be 'Yes Path Exists' if path exists, otherwise print 'No Such Path Exists'.
// Sample I/O Problem I:
// Input:
// 5
// 0 1 1 0 0
// 1 0 1 1 1
// 1 1 0 1 0
// 0 1 1 0 1
// 0 1 0 1 0
// 1 5
// Output:
// Yes Path Exists 
#include<bits/stdc++.h>
using namespace  std; 
bool dfs(int i,int des,vector<int>&vis,vector<int> adj[])
{
   vis[i]=1; 
   if(i==des)
     return true;
   for(auto itr: adj[i])
   {
      if(vis[itr]==-1)
      {
         if(dfs(itr,des,vis,adj))
           return true;
      }
   } 
   return false;
}
int main()
{
   int n,e;
   cout<<"Enter the number of nodes and edges "<<endl;
   cin>>n>>e;  
   vector<int> adj[n+1];
   for(int i=1;i<=e;i++)
   {
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   int src;
   int des;
   cout<<"ENter source and destination "<<endl;
   cin>>src>>des;
   vector<int>vis(n+1,-1);
   vis[src]=1;
   if(dfs(src,des,vis,adj))
     cout<<"Path Exist "<<endl;
   else
   cout<<"Path does not exist "<<endl;
  return 0;
}
