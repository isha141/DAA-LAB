
// Given an array of nonnegative integers, design a linear algorithm and implement it using a
// program to find whether given key element is present in the array or not. Also, find total number
// of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
//T.C= O(N) 
#include<bits/stdc++.h>
using namespace std; 
int linear_search(int *a,int n,int key)
{
   for(int i=0;i<n;i++)
   {
       if(a[i]==key)
       {
           return i;
       }
   }
   return -1;
}
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i]; 
    int key;
    cout <<"Enter the key "<<endl;
    cin>>key;
    if(linear_search(a,n,key)>=0)
    cout<<"Element is present "<<endl;
    else
    cout<<"Element is not present "<<endl;
  return 0;
}
