#include <bits/stdc++.h>
#include <stack>
using namespace std;

string choice;
int turn;
int nextTurn()
{
    if (choice == "VISIT")
    {
        turn= 0;
    }
    if (choice == "FORWARD")
    {
        turn = 1;
    }
    if (choice == "BACK")
    {
        turn = 2;
    }
}

int main()
{
    int t;
    string url;
    stack <string>fwrd;
    stack <string>bcrd;
    cin >> t;
    for ( int i = 1; i <= t; i++)
    {
        cin>> choice;
        while(!fwrd.empty())
        {
            fwrd.pop();
        }
        while (!bcrd.empty())
        {
            bcrd.pop();
        }
        url= "http://www.lightoj.com/";
        cout<<"Case " <<i <<":" <<endl;
        while (choice != "QUIT")
        {
            nextTurn();
            switch (turn)
            {
            case 0:
                bcrd.push(url);
                cin>>url;
                cout<<url <<endl;
                while(!fwrd.empty())
                {
                    fwrd.pop();
                }
                break;

            case 1:
                if(fwrd.empty())
                {
                    cout <<"Ignored" <<endl;
                }
                else {
                      bcrd.push(url);
                     url = fwrd.top();
                     fwrd.pop();
                     cout <<url <<endl;
                     }
                break;
            case 2:
                if(bcrd.empty())
                {
                    cout <<"Ignored" <<endl;

                }
                else
                {
                    fwrd.push(url);
                    url = bcrd.top();
                    bcrd.pop();
                    cout <<url <<endl;
                }
                break;
            }
            //cin >>choice;
        }
    }


}
