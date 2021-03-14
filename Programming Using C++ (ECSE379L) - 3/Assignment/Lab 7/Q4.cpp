#include <bits/stdc++.h>

using namespace std;

void read_array(int arr[],int l)
{
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
}
void arrange_array(int arr[],int l)
{
   sort(arr,arr+l);
}
void display_array(int arr[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int binarysearch(int arr[],int l,int r,int value)
{
    arrange_array(arr,l);
    if(r>=l)
    {
        int mid = l + (r-l) / 2;
        if(arr[mid]==value)
            return mid;
        if(arr[mid]>value)
            return binarysearch(arr,l,mid-1,value);
        return binarysearch(arr,mid+1,r,value);
    }
    return -999;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    read_array(a,n);
    cin>>x;
    cout<<"\n"<<binarysearch(a,0,n-1,x);
    return 0;
}
