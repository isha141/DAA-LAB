// Given an unsorted array of integers, design an algorithm and a program to sort the array using
// insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total
// number of times the array elements are shifted from their place) required for sorting the array.
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
// Third line will give total number of shift operations required. 
#include<bits/stdc++.h>
using namespace std; 
void insertion_sort(int *a,int n,int *shifts,int *comp)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>=temp)
        { 
            // cout<<temp<<" ";
            a[j+1]=a[j];
            (*comp)++;
             j--;
        }  
        {
        a[j+1]=temp;
          (*shifts)=(*shifts) + (i-j);
    }
    } 
    return ;
}
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];   
    int comp=0;
    int shifts=0;
    insertion_sort(a,n,&shifts,&comp);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";  
    cout<<endl;
    cout<<"Number of comparisions  "<<comp<<endl;
    cout<<"Number of shifts  are "<<shifts<<endl;
    cout<<endl;
    }
    return 0;
}
