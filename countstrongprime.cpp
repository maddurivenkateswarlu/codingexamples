#include <iostream>
using namespace std;
void gen_seive();
int strongprime(int p,int c,int n);
long long int N=1000001;
long long int seive[1000001];
int main() {
	gen_seive();
	int num1,num2,p,c,n,cou;
	int q;
	cin>>q;
	while(q--)
	{
	cin >> num1>>num2;
	for(int i=num1;i>=0;i--)
	if(seive[i])
	{
	    p=i;
	    break;
	}
	
	for(int i=num1;i<=num2;i++)
	if(seive[i])
	{
	    c=i;
	    break;
	}
	cou=0;
	for(int i=c+1;i<=num2;i++)
	if(seive[i])
	{
	    n=i;
	    if(strongprime(p,c,n)) cou++;
	    p=c;c=n;
	    
	}
	for(int i=num2+1;i<=num2+6;i++)
	if(seive[i])
	{
	    n=i;
	    if(strongprime(p,c,n))
	    {
	        if(c<=num2)
	        cou++;
	    } 
	    p=c;c=n;
	    
	}
	cout<<cou<<endl;
	
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

int strongprime(int p,int c,int n)
{
    int count=0;
    if(2*c>p+n)
    {
      count++;
    }
    return count;
}