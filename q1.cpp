#include<bits/stdc++.h>
using namespace std;
int linear_search(int *a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return 1;
    }
    return 0;
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        int key;
    cout<<"Enter the key you want to search "<<endl;
    cin>>key;
    cout<<linear_search(a,n,key);
    return 0;

}
