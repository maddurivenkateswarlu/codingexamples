#include <iostream>
#include<stack>
using namespace std;
void isbalanced(string s)
{
    stack<char> st;
    int flag=1;
        for(auto i:s)
        {
            if(i=='(' || i=='[' || i=='{')
            {
                st.push(i);
            }
            else if(i==']' && !st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else if(i=='}' && !st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else if(i==')' && !st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(st.size()!=0 || flag==0)
    cout<<"no";
    else
    cout<<"yes";
}
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
       isbalanced(s); 
    }
    return 0;
}