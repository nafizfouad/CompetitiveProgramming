#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > ss[100005],hh,vv,v(100005);
vector<pair<ll,ll> > pp,s;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,vector<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n-2; i++)
        {
            cin>>a>>b>>c;
            me[ {a,b}].pb(i);
            me[ {b,a}].pb(i);
            me[ {a,c}].pb(i);
            me[ {c,a}].pb(i);
            me[ {b,c}].pb(i);
            me[ {c,b}].pb(i);
            ss[i].pb(a),ss[i].pb(b),ss[i].pb(c);
            sa[a]=i,sa[b]=i,sa[c]=i;
            ma[a]++,ma[b]++,ma[c]++;
        }
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            if((*it).second==1)
            {
                d = (*it).first;
                e = sa[d];
                pa[e]=1;
                break;
            }
        }
        //cout<<1<<endl;
        v[0]=d;
        a = ss[e][0],b=ss[e][1],c=ss[e][2];
        //cout<<a<<" "<<b<<" "<<c<<endl;
        if(a==d)l = b,r = c;
        else if(b==d)l = a,r = c;
        else if(c==d)l = a,r = b;
        x = me[ {l,r}][0];
        y = me[ {l,r}][1];
        //cout<<101<<endl;
        if(x!=e)
        {
            //cout<<1001<<endl;
            a = ss[x][0],b=ss[x][1],c=ss[x][2];
            pa[x]=1;
        }
        else
        {
            //cout<<1101<<" "<<e<<" "<<l<<" "<<r<<" "<<d<<endl;
            a = ss[y][0],b=ss[y][1],c=ss[y][2];
            //cout<<1101<<endl;
            pa[y]=1;
        }
        //cout<<11<<endl;
        if(a!=l && a!=r)
        {
            v[3]=a;
            if(me[{a,b}].size()==2)v[2]=b,v[1]=c,l=b;
            else v[2]=c,v[1]=b,l=c;
            r = a;
        }
        else if(b!=l && b!=r)
        {
            v[3]=b;
            r=b;
            if(me[{b,c}].size()==2)v[2]=c,v[1]=a,l=c;
            else v[2]=a,v[1]=c,l=a;
        }
        else
        {
            v[3]=c;
            r=c;
            if(me[{c,a}].size()==2)v[2]=a,v[1]=b,l=a;
            else v[2]=b,v[1]=a,l=b;
        }
        //cout<<111<<endl;
        for(i=5;i<=n;i++){
            x = me[{l,r}][0];
            y = me[{l,r}][1];
            if(pa[x]==0){
                pa[x]=1;
                a = ss[x][0],b=ss[x][1],c=ss[x][2];
            }
            else{
                pa[y]=1;
                a = ss[y][0],b=ss[y][1],c=ss[y][2];
            }
            if(a!=l && a!=r){
                    v[i-1]=a;
                    l = r;
                    r = a;
                }
                else if(b!=l && b!=r){
                    v[i-1]=b;
                    l = r;
                    r = b;
                }
                else{
                    v[i-1]=c;
                    l = r;
                    r = c;
                }

        }
        for(i=0;i<n;i++)cout<<v[i]<<" ";
        cout<<endl;
    }

}
