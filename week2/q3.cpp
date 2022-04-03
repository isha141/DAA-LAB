//  Given an array of nonnegative integers, design an algorithm and a program to count the number
// of pairs of integers such that their difference is equal to a given key, K.
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be three input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Third line contains the key element.
// Output format:
// The output will have T number of lines.
// For each test case T, output will be the total count i.e., number of times such pair exists.
#include<bits/stdc++.h>
using namespace std; 
int find_pairs(int *a,int n,int key)
{ 
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(abs(a[i]-a[j])==key)
           count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cout<<"ENter the testcases "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"ENter the size of an array "<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int key;
        cout<<"Enter the key "<<endl;
        cin>>key; 
        int count=find_pairs(a,n,key);
        cout<<"Total possible pairs are "<<count<<endl;
    }
    return 0;
}