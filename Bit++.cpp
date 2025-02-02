
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int total=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            total+=1;
        }
        else
            total=total-1;


    }

    cout<<total;
}
