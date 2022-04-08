// Given an unsorted array of integers, design an algorithm and implement it using a program to
// sort an array of elements by dividing the array into two subarrays and combining these subarrays
// after sorting each one of them. Your program should also find number of comparisons and
// inversions during sorting the array.
// Input Format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Output Format:
// The output will have T number of lines.
// For each test case T, there will be three output lines.
// First line will give the sorted array.
// Second line will give total number of comparisons.
// Third line will give total number of inversions required.
#include<bits/stdc++.h>
using namespace std;  
int merge(int *a,int *t,int l,int mid,int h,int *comp)
{ 
    int inv=0;
    int i=l;
    int j=mid;
    int k=l;
    while(i<=mid-1 && j<=h)
    {  
        (*comp)++; 
        if(a[i]<=a[j])
         t[k++]=a[i++];
        else{ 
        (inv)=inv+(mid-i);
        t[k++]=a[j++]; 
    }
    }
    while(i<=mid-1)
    {
        t[k++]=a[i++];
    }
    while(j<=h)
    t[k++]=a[j++];
    for(int i=l;i<=h;i++)
    a[i]=t[i]; 
    return inv;
}
int merge_sort(int *a,int *t,int l,int h,int *comp)
{ 
    int inv=0;
    if(l<h)
    { 
       // cout<<(inv)<<" ";
        int mid=(l+h)/2;
        inv+=merge_sort(a,t,l,mid,comp);
        inv+=merge_sort(a,t,mid+1,h,comp);
        inv+=merge(a,t,l,mid+1,h,comp);
    } 
    return inv;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter array size "<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i]; 
        int comp=0;
        int t[n]={0};
        int inv=0;
        inv=merge_sort(a,t,0,n-1,&comp);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"Number of comaprisons are "<<comp<<endl;
        cout<<"Number of inversions are "<<inv<<endl;

    }
}
// 8
// 23 65 21 76 46 89 45 32
