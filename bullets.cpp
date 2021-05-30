//Refer prefix sum Question 2
#include <bits/stdc++.h>
using namespace std;
long long int N=100001;
long long int arr[100001]; 
long long int pre[100001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,bullets=0,count=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>arr[i];
        pre[0] = arr[0];
   
        for(int i=1;i<n;i++)
        {
                count++;
            if(arr[i]!=-1)
            {
                pre[i] = arr[i] + pre[i - 1];
            }
            else
            {
                arr[i]=pre[i-1]/(count);
                pre[i] = arr[i] + pre[i - 1];
            }
        }
    
    /*for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }*/
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
   
    return 0;
}