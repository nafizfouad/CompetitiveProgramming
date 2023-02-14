#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 2000
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC tget("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,d,e,f,y,z,r,l,x,u,o,w,g,h;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,vv,rr;
vector<pair<ll,ll> > ss,oo,uu;
vector<pair<ll,ll> > pp;
map<ll,ll > ta,pa,sa,ma;
map<ll,pair<ll,ll> >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char > de,ne;
set<ll >si,li;

//freopen("pow.in", "r", stdin);
//freopen("pow.out", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>st;
        n = st.size();
        for(i=0; i<n; i++)
        {
            de.pb(st[i]);
        }
        while(de.front()=='0')
        {
            de.pop_front();
            if(de.size()==0)break;
        }
        if(de.size())
        {
            while(de.back()=='0')
            {
                de.pop_back();
                if(de.size()==0)break;
            }
        }
        c = 0;
        for(i=0;i<de.size();i++){
            if(de[i]=='0')c=1;
        }
        if(c==0){
            cout<<0<<endl;
        }
        else{
            for(i=0;i<n;i++){
                if(st[i]=='1')v.pb(i);
            }
            l = 0;
            r = v.size();
            while(r-l>1){
                m = (l+r)/2;
                f = 0;
                p = v.size()-m;
                for(j=0;j<=m;j++){
                    a = v[j];
                    b = v[j+p-1];
                    if(b-a+1-p<=m){f=1;break;}
                }
                if(f==1)r=m;
                else l = m;
                //cout<<l<<" "<<r<<endl;
            }
            cout<<r<<endl;
        }
        de.clear();
        v.clear();
    }
}
