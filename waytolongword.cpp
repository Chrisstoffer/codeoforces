#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int length = s.length();
        if(length>10)
        {
                string first =s.substr(0,1);
                string last = s.substr(length-1,1);

                cout<<first<<length-2<<last<<endl;
        }
        else
            cout<<s<<endl;
    }
}
