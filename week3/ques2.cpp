//  Given an unsorted array of integers, design an algorithm and implement a program to sort this
// array using selection sort. Your program should also find number of comparisons and number of
// swaps required.
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
// Third line will give total number of swaps required.
#include<bits/stdc++.h>
using namespace std; 
void selection_sort(int *a,int n,int *swaps,int *comp)
{
      for(int i=0;i<n;i++)
      {
          int min=i;
          int temp=a[i];
          for(int j=i+1;j<n;j++)
          { 
               (*comp)++;
              if(a[j]<temp)
              { 
                  temp=a[j];
                  min=j;
              }
          } 
          {
              (*swaps)=(*swaps)+1;
          swap(a[i],a[min]);
          }
      }
}
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
    int n; 
    cout<<"Enter n "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int swaps=0;
    int comp=0;
    selection_sort(a,n,&swaps,&comp); 
    cout<<"Number of comparison are "<<comp<<endl;
    cout<<"Number of swaps are "<<swaps<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" "; 
    }
    return 0;
}