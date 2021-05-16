#include <iostream>

using namespace std;
long long int N=100001;
long long int arr[100001];
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
	    arr[i]=arr[i]|arr[i+1];
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}

}
