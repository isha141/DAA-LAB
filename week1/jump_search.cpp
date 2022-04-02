// Given an already sorted array of positive integers, design an algorithm and implement it using a
// program to find whether a given key element is present in the sorted array or not. For an array
// arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k
// ] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
// to find the element
// key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):
// Jump Search
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be three input lines.
// First line contains n (the size of array).
// Second line contains n space-separated integers describing array.
// Third line contains the key element that need to be searched in the array.
// Output format:
// The output will have T number of lines.
// For each test case, output will be “Present” if the key element is found in the array, otherwise
// “Not Present”.
// Also, for each test case output the number of comparisons required to search the key 
#include<bits/stdc++.h>
using namespace std;  
int linear_search(int *a,int i,int j ,int key)
{
    while(i!=j)
    {
        if(a[i]==key)
        return i;
        i++;
    }
    return -1;
}
int jump_search(int *a,int n,int key)
{
    int m=sqrt(n);
    int i=0;
    while(a[m]<=key && m<n)
    {
        i=m;
        m=m+sqrt(n); 
        if(m > n-1)
            return -1;
    } 
    return linear_search(a,i,m,key);
}
int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cout<<"Enter key which you want to search "<<endl;
    cin>>key;
    if(jump_search(a,n,key)!=-1)
    cout<<"Key is present "<<endl;
    else
    cout<<"Key is not present "<<endl;
    return 0;
}
