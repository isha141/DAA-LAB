// . Given a directed graph, design an algorithm and implement it using a program to find whether
// cycle exists in the graph or not.
// Input Format:
// Input will be the graph in the form of adjacency matrix or adjacency list.
// Output Format:
// Output will be 'Yes Cycle Exists' if cycle exists otherwise print 'No Cycle Exists'.
// Sample I/O Problem III:
// Input:
// 5
// 0 1 1 0 0
// 0 0 0 1 1
// 0 1 0 1 0
// 0 0 0 0 1
// 0 0 0 0 0
// Output:
// No Cycle Exists 


#include<bits/stdc++.h>
using namespace std; 
bool solve(int i,vector<int> adj[],vector<int>&vis,vector<int>&dfsvis)
{
   vis[i]=1;
   dfsvis[i]=1;
   for(auto itr: adj[i])
   {
      if(!vis[itr]){
       if(solve(itr,adj,vis,dfsvis))
       return true;
      }
      else if(dfsvis[itr])
      return true;
   }
   dfsvis[i]=0;
   return false;
}
int main()
{
   int n,e;
   cout<<"ENter the number of nodes and edges "<<endl;
   cin>>n>>e;
   vector<int> adj[n+1];
   for(int i=1;i<=n;i++)
      {
         int u,v;
         cin>>u>>v;
         adj[u].push_back(v);
      }
      vector<int>dfsvis(n+1,0);
      vector<int>vis(n+1,0);
      for(int i=1;i<=n;i++)
     { 
        if(!vis[i])
        {
           if(solve(i,adj,vis,dfsvis)){ 
              cout<<"Cycle Exist "<<endl;
              return true;
           } 
        } 
     }
    cout<<"No cycle exist "<<endl;
     return 0;
}
