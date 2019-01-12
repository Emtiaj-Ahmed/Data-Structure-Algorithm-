#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{

    int t;
    cin >>t;
    for(int i=0; i<=t; i++)
    {
       string str;
       cin>>str;
       stack<char>st;
        for(int n=0;n<str.size();n++)
        {
            if(!st.empty() && str[n]==')' && st.top()=='(' )
            {
                 st.pop();
            }

            else if(!st.empty()  && str[n]==']' && st.top()=='[')
            {
                 st.pop();
            }

             else
             {
                   st.push(str[n]);
             }

        }
         if(st.empty())
         {
           cout <<"Yes" <<endl;
         }

        else
        {
            cout <<"No" <<endl;
        }


    }
    return 0;
}





