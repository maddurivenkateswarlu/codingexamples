//reverse an array in iterative method
#include <iostream>

using namespace std;

int main()
{
    int n,i,l,r;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements into array";
    for(i=0;i<n;i++) cin>>arr[i];
    
    l=0;r=n-1;
    while(l<=r)
    {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }

    for(i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
