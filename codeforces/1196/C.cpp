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
    vector< pair<ll, pair<ll,ll> > > v,s,vv;
    vector<pair<ll,ll> > ss;
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        s.clear();
        ma.clear();pa.clear();
        sa.clear();ta.clear();
        for(i=0; i<n; i++)
        {
            cin>>a>>b>>c>>d>>e>>f;
            v.pb({{a}, {c,e}});
            s.pb({{b}, {f,d}});
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        a = v[0].first; b= s[0].first;
        c = 0;
        f = 0;
        d = 0;
        for(i=0;i<n;i++){
            x = v[i].first;
            l = v[i].second.first;
            m = v[i].second.second;

            if(l==0 && m==0 && (d-ma[x])>0) {f=1; break;}

            else if(l==0 && m==0 && (c-pa[x])>0) {f=1; break;}

            else if(l==0 && m==0) c++, y = x, a = x, pa[x]++;

            else if(l==0 && m==1 && (d-ma[x])>0) {f=1; break;}

            else if(l==0 && m==1 && (c-pa[x])>0) {f=1; break;}

            else if(l==0 && m==1) a = x;

            else if(l==1 && m==0) d++,ma[x]++;
        }
        c = 0;d=0;
        for(i=0;i<n;i++){
            x = s[i].first;
            l = s[i].second.first;
            m = s[i].second.second;

           if(l==0 && m==0 && (d-sa[x])>0) {f=1; break;}

           else if(l==0 && m==0 && (c-ta[x])>0) {f=1; break;}

            else if(l==0 && m==0) c++, y = x, b = x, ta[x]++;

            else if(l==0 && m==1 && (d-sa[x])>0) {f=1; break;}

            else if(l==0 && m==1 && (c-ta[x])>0) {f=1; break;}

            else if(l==0 && m==1) b = x;

            else if(l==1 && m==0) d++,sa[x]++;
        }
        if(f==1)cout<<0<<endl;
        else cout<<1<<" "<<a<<" "<<b<<endl;
    }
}



