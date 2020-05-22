#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<ll,pair<ll,ll> > ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        p = b%10;
        c=a/b;
        f = p;
        for(j=2;; j++)
        {
            d = b*j;
            e = d%10;
            if(e==p)break;
            else
            {
                f = f+e;
            }
        }
        j--;
        d = c/j;
        d = d*f;
        e = c%j;
        for(j=1; j<=e; j++)
        {
            f = (j*b);
            d = d+(f%10);
        }
        cout<<d<<endl;
    }
}
