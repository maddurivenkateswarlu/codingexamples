//using sort method to sort array and vector
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   int arr[5]={100,10,20,60,50};
   //Ascending order
   sort(arr,arr+5);
   for(auto i:arr)
   cout<<i<<" ";
   
   cout<<endl;
   //Descending order
   sort(arr,arr+5,greater<int>());
   for(auto i:arr)
   cout<<i<<" ";
   
   cout<<endl;cout<<endl;
   //vector sorting
   
   vector<int>v ={12,11,9,50,45};
   sort(v.begin(),v.end());
   for(auto i:v)
   cout<<i<<" ";
   
    cout<<endl;cout<<endl;
   sort(v.begin(),v.end(),greater<int>());
   for(auto i:v)
   cout<<i<<" ";
   //using iterator
   cout<<endl;
   cout<<"using Iterator"<<endl;
   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
   cout<<*it<<" ";
    return 0;
}
