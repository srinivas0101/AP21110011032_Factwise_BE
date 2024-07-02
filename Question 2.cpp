#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,p,l=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>p;
        arr[i]=p;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        if(arr[l]>arr[n-1])
        {
            sum=sum+arr[l];
            l=l+1;
        }
        else
        {
            sum=sum+arr[n-1];
            n=n-1;
        }
    }
    cout<<sum;
    
}
