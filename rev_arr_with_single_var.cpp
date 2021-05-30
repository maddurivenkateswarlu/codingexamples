//reverse an array in Recursive method using single variable
#include <iostream>

using namespace std;
void array_reverse(int l,int a[]);
int n;
int main()
{
    int i;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements into array";
    for(i=0;i<n;i++) cin>>arr[i];
   
    array_reverse(0,arr);
     
     for(i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return 0;
}

void array_reverse(int l,int a[])
{
    
    if(l>=(n-l-1))
    {
        return;
    }
    swap(a[l],a[n-l-1]);
    array_reverse(l+1,a);
}