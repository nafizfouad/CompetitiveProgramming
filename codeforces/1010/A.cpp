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
    map<pair<ld,ld>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    ee = m*1.0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0; i<n; i++)
    {
        cin>>a;
        s.pb(a);
    }
    aa = 1.0;
    bb = 1e9*1.0;
    ff = 1e18*1.0;
    while(aa<=bb)
    {
        cc = (aa+bb)/2.0;
        me[{aa,bb}]++;
        if(me[{aa,bb}]>1)break;
        pp = cc;
        dd = cc+ee;
        for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                kk = dd/(v[i]*1.0);
                cc = cc-kk;
                if(cc<0.0)break;
                dd = dd-kk;
                if(i!=0){kk = dd/(s[i]*1.0);
                cc = cc-kk;if(cc<0.0)break;dd=dd-kk;}

            }
            else if(i%2==1)
            {
                kk = dd/(s[i]*1.0);
                cc = cc-kk;
                if(cc<0.0)break;
                dd = dd-kk;
                kk = dd/(v[i]*1.0);
                cc = cc-kk;
                if(cc<0.0)break;
                dd = dd-kk;
            }
        }
        kk = dd/(s[0]*1.0);
        cc = cc-kk;
        //cout<<aa<<" "<<bb<<" "<<cc<<" "<<pp<<endl;
        if(cc<0.0)aa=pp;
        else bb=pp,ff = min(ff,pp);

    }
    if(ff!=1e18*1.0)cout<<setprecision(10)<<fixed<<ff<<endl;
    else cout<<-1<<endl;
}
