#include <iostream>

using namespace std;

int find_equilibrium(int arr[],int n);
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int result=find_equilibrium(arr,n);
	if(result==-1)
	{
	    cout<<"there is no equilibrium index";
	}
	else
	{
	    cout<<"equilibrium index is "<<result;
	}
	
return 0;
}
int find_equilibrium(int arr[],int n)
{
    int tsum=0;
    int lsum=0;
    
    for(int i=0;i<n;i++)
    {
        tsum+=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        tsum -= arr[i];
        if(tsum==lsum)
        {
            return i;
        }
        lsum+=arr[i];
    }
    return -1;
}

