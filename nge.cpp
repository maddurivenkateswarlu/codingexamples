#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int * NGE(int a[],int n)
{
    int *nge1;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && a[i]>a[st.top()]) {
            nge1[st.top()]=i;
            st.pop();
            
        }
        st.push(i);
        
    }
    while(!st.empty()){
        nge1[st.top()]=-1;
        st.pop();
    }
    return nge1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int * nge=NGE(arr,n);
    for(int i=0;i<n;i++){
        if(nge[i]==-1)
        cout<<nge[i]<<" ";
        else
        cout<<arr[nge[i]]<<" ";
    }
    //cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
    return 0;
}
