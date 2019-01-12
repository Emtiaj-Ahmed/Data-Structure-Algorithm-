#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >>str;
    stack <char> st;
    for (int i=0; i < str.size() ; i++)
    {
        if(!st.empty() && st.top() =='(' && str[i] == ')')
            st.pop();
        else
            st.push(str[i]);

    }
    if(st.empty())

        cout << str << "is Balanced" <<endl;

    else

        cout << str << "is Not-Balanced" <<endl;


    return 0;

}
