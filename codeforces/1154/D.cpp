#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,pair<ll,ll> > me;
    map<ll ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>c>>d;
    e = d;
    f = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        g=0;
        if(v[i]==0)
        {
            if(d>0)
            {
                d--;
                g=1;
            }
            else if(c>0)
            {
                c--;
                g=1;
            }
        }
        else
        {
            if(c>0 && d<e)
            {
                c--;
                d++;
                g=1;
            }
            else if(d>0)
            {
                d--;
                g=1;
            }
        }
        if(g==1)f++;
        else break;
    }
    cout<<f<<endl;
}



