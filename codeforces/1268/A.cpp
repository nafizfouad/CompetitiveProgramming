

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
long long int i,n,m;
string st,et;


int main()
{
    fast;
        cin>>n>>m;
        cin>>st;
        et = st.substr(0,m);
        cout<<n<<endl;
        for(i=m; i<n; i++)
        {
            et = et+et[i-m];
        }
        if(et<st)
        {
            for(i=m-1; i>=0; i--)
            {
                if(et[i]=='9')
                    {et[i]='0';}
                else
                {
                    ++et[i];
                    break;
                }
            }
            for(i=m; i<n; i++)
            {
                et[i]=et[i-m];
            }
            cout<<et<<endl;
        }
        else
        {
            cout<<et<<endl;
        }
    }
