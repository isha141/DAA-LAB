#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter t "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter n "<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k;
        cout<<"Enter k "<<endl;
        cin>>k;
        priority_queue<int,vector<int>,greater<int> > pq2;
        priority_queue<int>pq1;
        for(int i=0;i<n;i++){
            pq1.push(a[i]);
            pq2.push(a[i]);
        }
       int t=k;
       while(--t)
       {
          pq1.pop();
       }
       cout<<"The kth largest element in a array is "<<pq1.top()<<endl;
       t=k;
       while(--t)
       {
          pq2.pop();
       }
        cout<<"The kth smallest element in a array is "<<pq2.top()<<endl;
    }
       return 0;

}
