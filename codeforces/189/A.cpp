#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    vector<ll > v,s,vv;
    vector<ll> aa;
    map<ll,ll> ma,sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;

    for(i=0; i<3; i++)
    {
        cin>>a;
        if(ma[a]==0 && a<=n)
        {
            v.pb(a);
            ma[a]=1;
        }
    }
    sort(v.begin(),v.end());
    m =n;
    if(v.size()==1)cout<<n/v[0]<<endl;
    else if(v.size()==2)
    {
        for(i=0;; i++)
        {
            n = n-(v[1]*i);
            if(n%v[0]==0)
            {
                cout<<i+n/v[0]<<endl;
                break;
            }
            n = m;
        }
    }
    else
    {   f=0;
        m = n;
        for(j=0;; j++)
        {
            n = n-(v[2]*j);
            e = n;
            if(n<0)break;
            for(i=0;; i++)
            {
                n = n-(v[1]*i);
                if(n<0){break;}
                else if(n%v[0]==0)
                {
                    s.pb(j+i+n/v[0]);
                    break;
                }
                n = e;
            }
            n = m;
        }
        sort(s.begin(),s.end());
        cout<<s[s.size()-1]<<endl;
    }
}
