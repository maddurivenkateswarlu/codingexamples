//reverse an array in Recursive method
#include <iostream>

using namespace std;
void array_reverse(int l,int r,int a[]);
int main()
{
    int n,i,l,r;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements into array";
    for(i=0;i<n;i++) cin>>arr[i];
    
    l=0;r=n-1;

    array_reverse(l,r,arr);
     for(i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}

void array_reverse(int l,int r,int a[])
{
    
    if(l>=r)
    {
        return;
    }
    swap(a[l],a[r]);
    array_reverse(l+1,r-1,a);
}