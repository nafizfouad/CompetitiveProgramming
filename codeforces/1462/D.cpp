#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp;
    vector<ll > v,s,vv,tt;
    vector<ll> ss;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        c = 0;
        l = 1e18;
        for(i=0; i<n; i++)
        {
            c = c+v[i];
            d = 0;
            e = 0;
            g = 0;
            f = 0;
            for(j=n-1; j>i; j--)
            {
                e++;
                d = d+v[j];
                if(d==c)
                {
                    d = 0;
                    f = f+e-1;
                    e = 0;
                }
                else if(d>c){g=1;break;}
            }
            if(g==0 && d==0)l = min(l,f+i);
        }
        cout<<l<<endl;
        v.clear();
    }

}
