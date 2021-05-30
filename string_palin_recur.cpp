//string palindrome using recursion
#include <iostream>
#include<string.h>
using namespace std;
bool palin(int l,int r,char a[],int n);
int main()
{
    int n,l,r;
    char string[10];
    cout<<"enter a string";
    cin>>string;
    n=strlen(string);
    l=0;r=n-1;
    bool res=palin(l,r,string,n);
    if(res)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}

bool palin(int l,int r,char a[],int n)
{
    
    if(l>=(n>>1))
    {
        return 1;
    }
    if(a[l]!=a[r])
    {
        return 0;
    }
    return palin(l+1,r-1,a,n);
}