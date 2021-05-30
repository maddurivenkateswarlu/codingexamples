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
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre[i] = arr[i] + pre[i - 1];
   int Q;
   cin>>Q;
   while(Q--)
   {
       int l,r;
       cin>>l>>r;
       cout<<pre[r]-pre[l-1];
   }
    }
    return 0;
}