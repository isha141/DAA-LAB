// Given a sorted array of positive integers containing few duplicate elements, design an algorithm
// and implement it using a program to find whether the given key element is present in the array
// or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be three input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Third line contains the key element that need to be searched in the array.

#include<bits/stdc++.h>
using namespace std; 
int linear_search(int *a,int n,int key)
{
         int low=0;
         int h=n-1;
         while(low<=h)
         {
            int mid=(low+h)/2;
            if(a[mid]==key)
             return mid;
            else if(a[mid]<key)
               low=mid+1;
            else if(a[mid]>key)
               h=mid-1;
         }
         return -1;

}
int main()
{ 
    int t;  
    cout<<"Enter teh number of test case "<<endl;
    cin>>t;
    while(t--){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    if(linear_search(a,n,key)!=-1)
    {
        cout<<"Key is found "<<endl;
    } 
    else
    cout<<"Key is not found "<<endl; 
    } 
     sort(a,n);
     for(int i=0;i<n;i++)
         {
            for(int j=0;j<n-1;j++)
            {
                     if(a[j]<a[j+1])
                          swap(a[j],a[j+1]);
            }
         } 
      int count=0;
         for(int i=0;i<n;i++)
         {
               if(a[i]==a[i+1])
                        count++;
                  
         }
      cout<<"Number of occurences of dupliate key are "<<count<<endl;
    return 0;
}
 
