// Given an already sorted array of positive integers, design an algorithm and implement it using a
// program to find whether given key element is present in the array or not. Also, find total number
// of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).
#include<bits/stdc++.h>
using namespace std; 
int binary_search(int *a,int n,int key)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;\
        if(a[mid]==key)
        return mid;
        else if(a[mid]<key)
        l=mid+1;
        else
        h=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an arary "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i]; 
    cout<<"Enter the key which you want to search "<<endl;
    int key;
    cin>>key;
    if(binary_search(a,n,key)!=-1)
     cout<<"Element is present  "<<endl;
    else
    cout<<"Element is not present "<<endl;
    return 0;
}
