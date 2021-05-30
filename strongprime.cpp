#include <iostream>
using namespace std;
void gen_seive();
void strongprime(int p,int c,int n);
long long int N=1000001;
long long int seive[1000001];
int main() {
	gen_seive();
	int num1,num2,p,c,n;
	int q;
	cin>>q;
	while(q--)
	{
	cin >> num1>>num2;
	if(num1>2)
	{
	for(int i=num1;i>=0;i--)
	{
	    
	    if(seive[i])
	    {
	    p=i;
	    break;
	    }
	    
	}
	
	
	for(int i=num1;i<=num2;i++)
	if(seive[i])
	{
	    c=i;
	    break;
	}
	for(int i=c+1;i<=num2;i++)
	if(seive[i])
	{
	    n=i;
	    strongprime(p,c,n);
	    p=c;c=n;
	    
	}
	for(int i=num2+1;i<=num2+6;i++)
	if(seive[i])
	{
	    n=i;
	    if(c<=num2)
	    strongprime(p,c,n);
	    p=c;c=n;
	    
	}
	
	}
	else{
	    cout<<"start range from 3 "<<endl;
	}
	}
	
	
}

void gen_seive()
{
	int i,j;
	for(i=0;i<N;i++) seive[i]=1;
	seive[0]=seive[1]=0;
	for(i=2;i*i<N;i++)
	{
		if(seive[i]==1)
		{
			for(j=i*i;j<N;j+=i)
			seive[j]=0;
		}
	}
}

void strongprime(int p,int c,int n)
{
    if(2*c>p+n)
    cout<<c<<" ";
}