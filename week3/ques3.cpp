// Given an unsorted array of positive integers, design an algorithm and implement it using a
// program to find whether there are any duplicate elements in the array or not. (use sorting) (Time
// Complexity = O(n log n))
// Input Format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Output Format:
// The output will have T number of lines.
// For each test case, output will be 'YES' if duplicates are present otherwise ‘NO’
#include<bits/stdc++.h>
using namespace std;  
void merge(int *a,int *t,int l,int mid,int h)
{
   int i=l;
   int j=mid+1;
   int k=l;
   while(i<=mid && j<=h)
   {
       if(a[i]<a[j])
       {
           t[k++]=a[i++];
       }
       else
       t[k++]=a[j++];
   }     
   while(i<=mid)
   {
       t[k++]=a[i++];
   }
   while(j<=h)
   {
       t[k++]=a[j++];
   }
   for(int i=l;i<h;i++)
   a[i]=t[i];
}
void sort(int *a,int *t ,int l,int n)
{
    if(l<n)
    {
        int mid=(l+n)/2;
        sort(a,t,l,mid);
        sort(a,t,mid+1,n);
        merge(a,t,l,mid,n);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"ENter arary size "<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i]; 
        int t[n]={0};
        sort(a,t,0,n-1); 
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]){
            cout<<"Yes "<<endl;
            return 0 ;
            }
        }
       cout<<"No "<<endl;
        return 0;
    }
}