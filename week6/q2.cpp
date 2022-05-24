// Given a graph, design an algorithm and implement it using a program to find if a graph is
// bipartite or not. (Hint: use BFS)
// Input Format:
// Input will be the graph in the form of adjacency matrix or adjacency list.
// Output Format:
// Output will be 'Yes Bipartite' if graph is bipartite, otherwise print 'Not Bipartite'.
// Sample I/O Problem II:
// Input:
// 5
// 0 1 1 0 0
// 1 0 1 1 1
// 1 1 0 1 0
// 0 1 1 0 1
// 0 1 0 1 0
// Output:
// Not Bipartite 
#include<bits/stdc++.h>
using namespace std; 
bool bfs(vector<int>&col,vector<int> adj[],int i)
{
   queue<pair<int,int>>q;
   q.push({i,-1});
   col[i]=1;
   while(!q.empty())
   {
      auto temp=q.front();
      q.pop(); 
      int node=temp.first;
      int par=temp.second;
      for(auto itr: adj[node])
      {
         if(col[itr]==-1)
         { 
            col[itr]=1^col[node];
          q.push({itr,node});
         }
         else if(col[itr]==col[node])
            return false;
      }
      return true;
   }
}
int main()
{
   int n,e; 
   cout<<"Enter nodes and edges "<<endl;
   cin>>n>>e;
   vector<int> adj[n+1];
   for(int i=1;i<=e;i++)
   {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   vector<int>col(n+1,-1);
   for(int i=1;i<=n;i++)
   {
      if(col[i]==-1)
      {
        if(!bfs(col,adj,i)){
         cout<<"'Not Bipartite'"<<endl;
         return 0;
        }
      }
   }
   cout<<"' Bipartite'"<<endl;
   return 0;
}
