#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< pair<pair<ll,ll>,ll > > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll> > me;
    map<char,ll > ta,pa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>m;
        cin>>st;
        cin>>et;
        ll ma[125],sa[125];
        memset(ma,0,sizeof ma);
        memset(sa,0,sizeof sa);
        for(j=0; j<n; j++)
        {

            ma[int(st[j])]++;
            sa[int(et[j])]++;
        }
        f = 0;
        for(char ch='a'; ch<='z'; ch++)
        {
            b = sa[int(ch)];
            c = 0;
            for(char dh='a'; dh<=ch; dh++)
            {
                if(dh==ch)
                {
                    if(ma[int(dh)]<b)f = 1;
                    else
                    {
                        d = ma[int(dh)] - b;
                        ma[int(dh)] = d;
                    }
                }
                else
                {
                    d = ma[int(dh)]%m;
                    e = ma[int(dh)] - d;
                    ma[int(dh)] = d;
                    char bh = dh+1;
                    ma[int(bh)] += e;
                }
            }
            if(f==1)break;
        }
        if(f==1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
