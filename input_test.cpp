/*
input:

the input begins with two positive numbers n,k(n,k<=10^7). The next n lines of input contains one positive integer ti, not greater than 10^9.

output:

write a single integer to output ,denoting how many integers ti are divisible by k.

*/
#include <iostream>

using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    int tot=0;
    for(int i=0;i<n;i++)
    {
        long long int t;
        cin>>t;
        if(t%k==0)
        {
            tot++;
            //cout<<t;
        }
    }
    cout<<tot<<endl;

    return 0;
}


/*
output:
7 3
1
51
966369
7
9
999996
11
4



*/