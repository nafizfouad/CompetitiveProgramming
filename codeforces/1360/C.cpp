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
        cin>>a;
        m = 0;
        p = 0;
        for(j=0; j<a; j++)
        {
            cin>>b;
            v.push_back(b);
            if(b%2==0)m++;
            else if(b%2==1)p++;
        }
        sort(v.begin(),v.end());
        if(m%2==0 && p%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            f = 0;
            for(j=0; j+1<a; j++)
            {
                c = abs(v[j]-v[j+1]);
                if(c==1){f=1;break;}
            }
            if(f==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        v.clear();
    }
}
