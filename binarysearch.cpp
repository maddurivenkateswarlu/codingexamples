//binary search using recursion
#include <iostream>
using namespace std;
int binarysearch(int low,int high, int x,int a[]);
int n;
int main()
{
    int i,x;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements into array";
    for(i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter an element to search";
    cin>>x;
    int res=binarysearch(0,n-1,x,arr);
     if(res==-1)
     {
         cout<<"given element is not found";
     }
     else
     {
         cout<<"given element is at index : "<<res<<" or "<<"given element is at position : "<<res+1;
     }
     
    return 0;
}

int binarysearch(int low,int high, int x,int a[])
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)>>1;
    if(x==a[mid])
    {
        return mid;
    }
    else if(x>a[mid])
    {
        return binarysearch(mid+1,high,x,a);
    }
    else
    {
        return binarysearch(low,mid-1,x,a);
    }
}