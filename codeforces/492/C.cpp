#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,vv;
    vector<ll> s[1010];
    map<char,ll > mm;
    vector<pair<pair<ll, ll >,ll> > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>n>>m>>f;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        c = c+a;
        if(a<m)
        {
            ma.pb({{b,a},1});
        }
    }
    d = n*f;
    e = d-c;
    d = 0;
    sort(ma.begin(),ma.end());
    if(e>0)
    {
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            b = m-((*it).first.second);
            c = (*it).first.first;

            if(e>b)
            {
                e = e-b;
                d = d+(b*c);
            }
            else
            {
                d = d+(e*c);
                break;
            }
        }
        cout<<d<<endl;
    }
    else cout<<0<<endl;
}
