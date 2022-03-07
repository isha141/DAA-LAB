#include<bits/stdc++.h>
using namespace std;
int binary_search(int *a,int n,int key)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
            return 1;
       else if(a[mid]<key)
        low=mid+1;
       else
       high=mid-1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter  size "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cout<<"Enter key "<<endl;
    cin>>key;
    if(binary_search(a,n,key))
        cout<<"Element is found "<<endl;
    else
        cout<<"Element is not found "<<endl;
    return 0;

}
