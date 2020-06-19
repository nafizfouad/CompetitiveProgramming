#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<pair<ll,ll> > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>st;
            vs.pb(st);
        }
        d = -9999999999;
        e = -1;
        for(i=0; i<n; i++)
        {
            c = 0;
            for(j=0; j<m; j++)
            {
                if(vs[i][j]=='*')
                {
                    c++;
                    ma[j]++;
                }
            }
            v.pb({c,i});
        }
        sort(v.begin(),v.end());
        for(i=0;i<m; i++)
        {
            if(ma[i]>0)s.pb({ma[i],i});
            else s.pb({0,i});
        }
        sort(s.begin(),s.end());
        f = 0;
        for(i=n-1;i>0;i--){
        a = v[i].first;
            b = v[i-1].first;
            if(a!=b){f=1;break;}
        }
        if(f==0)p=0;
        else p = i;
        f = 0;
        for(i=m-1;i>0;i--){
        a = s[i].first;
            b = s[i-1].first;
            if(a!=b){f=1;break;}
        }
        if(f==0)q=0;
        else q = i;
       // cout<<p<<" "<<q<<" "<<s.size()<<endl;
        for(i=n-1; i>=p; i--)
        {
            a = v[i].first;
            for(j=m-1; j>=q; j--)
            {
                c = s[j].first;
                e = v[i].second;
                f = s[j].second;
                g = n-a;
                x = m-c;
                y = g+x;
//                cout<<m<<" "<<j<<endl;
//                cout<<y<<" "<<g<<" "<<x<<endl;
                if(vs[e][f]=='.')y--;
                vv.pb(y);
            }
        }
        sort(vv.begin(),vv.end());
        cout<<vv[0]<<endl;
        vv.clear();
        v.clear();
        vs.clear();
        s.clear();
        ma.clear();
    }


}

