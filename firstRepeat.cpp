/*
Given an array arr[] of size n, find the first repeated element. 
The element should occurs more than once and the index of its first occurance should be the smallest.

Input:

n=7
arr[]={1,5,3,4,3,5,6}
output:2

Explanation::
5 is appearing twice and its appearence is at index 2 which is lessthan 3whose first occuring index is 3.
 
*/
#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;

int firstRepeat(int arr[],int n)
{
    map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;
    for(int i=0;i<n;i++)
    {
        int key = arr[i];
        auto temp = umap.find(key);
        int val = temp->second;
        if(val>1)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int res=firstRepeat(arr,n);
    if(res==-1)
    cout<<"Elements not repeated ";
    else
    cout<<"first occurance index is: "<<res;
    
    return 0;
}

/*
7 
1 3 5 6 3 4 1
1 2
3 2
4 1
5 1
6 1
first occurance index is: 1


*/