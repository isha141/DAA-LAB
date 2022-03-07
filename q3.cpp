#include<bits/stdc++.h>
using namespace std;
int binary_search(int *a,int low,int high,int key)
{
    if(high<low)return 0;
    int mid=(high+low)/2;
    //cout<<a[mid]<<" ";
    if(a[mid]==key)
        return 1;
    if(a[mid]>key)
        binary_search(a,low,mid-1,key);
    else if(a[mid]<key)
        binary_search(a,mid+1,high,key);
}
int main()
{
    int n;
    cout<<"Enter array size "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of an array "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cout<<"Enter key "<<endl;
    cin>>key;
    if(binary_search(a,0,n,key))
        cout<<"Element is found "<<endl;
    else
        cout<<"Element is not found "<<endl;
        return 0;
}
