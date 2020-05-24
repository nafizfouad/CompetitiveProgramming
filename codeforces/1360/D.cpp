#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c=0;
    d = 0;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a<=b)cout<<1<<endl;
        else
        {
            m = 999999999999999;
            for(j=1; j*j<=a; j++)
            {
                if(a%j==0)
                {
                    c = a/j;
                    if(j<=b)
                    {
                        if(m>c){m=c;}
                    }
                    if(c<=b)
                    {
                        if(m>j){m=j;}
                    }
                }
            }
            cout<<m<<endl;
        }
    }
}
