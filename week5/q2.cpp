#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int target;
        cout<<"Enter target "<<endl;
        cin>>target;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            if(a[low]+a[high]==target)
            {
                cout<<a[low]<<" "<<a[high]<<endl;
                break;
            }
            else if(a[low]+a[high]<target)
                low++;
            else
                high--;
        }
    }
    return 0;
}

