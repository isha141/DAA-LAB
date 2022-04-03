//  Given a sorted array of positive integers, design an algorithm and implement it using a program
// to find three indices i, j, k such that arr[i] + arr[j] = arr[k].
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Output:
// The output will have T number of lines.
// For each test case T, print the value of i, j and k, if found else print “No sequence found”.
#include<bits/stdc++.h>
using namespace std; 
vector<int> print_sub(int *a,int n)
{ 
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                  arr.push_back(i);
                  arr.push_back(j);
                  arr.push_back(k);
                }
            }
        }
    }
    return arr;
}
int main()
{
    int t;
    cout<<"Enter the number of testcases "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of an array "<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i]; 
        vector<int>ans;
        ans=print_sub(a,n);  
        if(ans.size()==0)
        cout<<"No Subsequence found "<<endl;
        else{
        for(auto itr: ans)
         cout<<itr<<" ";
         cout<<endl; 
        }
    } 
    return 0;
}