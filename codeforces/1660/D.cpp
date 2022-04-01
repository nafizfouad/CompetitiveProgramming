#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<ll,vector<pair<ll,ll> > >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s.pb(-1);
        for(i=0; i<n; i++)
        {
           cin>>a;
           if(a==0)s.pb(i);
           v.pb(a);
        }
        s.pb(n);
        l = -1;
        r = -1;
        g=-1e18;
        for(i=0;i+1<s.size();i++){
            a = s[i];
            b = s[i+1];
            c = 0;
            f = 0;
            for(j=a+1;j<b;j++){
                if(v[j]<1)c++;
            if(v[j]==2 || v[j]==-2)f++;
            }
            
            d = 1;
            u = -1;
            o = -1;
            for(j=a+1;j<b;j++){
                    d = d*v[j];
                if(v[j]<1){u=j;break;}
            }
            d = abs(d);
            e = 1;
            for(j=b-1;j>a;j--){
                    e = e*v[j];
                if(v[j]<1){o=j;break;}
            }
            e = abs(e);
 //cout<<f<<" "<<g<<" "<<a<<" "<<b<<endl;
            if(c%2==1){
                if(d<e){
                        f = 0;
                    for(j=u+1;j<b && j<n;j++){
                        if(v[j]==2 || v[j]==-2)f++;
                    }
                    o =-1;
                }
                else {
                    f = 0;
                   for(j=o-1;j>a && j>=0;j--){
                    if(v[j]==2 || v[j]==-2)f++;
                   }
                    u =-1;
                }
            }
            else o=-1,u=-1;

            if(f>g && b-a>1){
                g = f;
                if(u!=-1)l=u+1;
                else l = a+1;
                if(o!=-1)r = n-o;
                else r = n-b;
            }
            //cout<<f<<" "<<g<<" "<<a<<" "<<b<<endl;
        }
        if(l==-1 && r==-1)l=0,r=n;
        cout<<l<<" "<<r<<endl;
        v.clear();
        s.clear();
    }
}

