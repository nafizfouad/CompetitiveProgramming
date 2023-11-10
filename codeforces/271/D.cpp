/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 1000000007
#define mod1 1000000009
#define cl clear()
#define con continue
//#define endl '\n'
#define MAXN 200003
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
long long int i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,v,vv,rr,hh,pp;
vector<pair<ll,ll> > ss;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<char,ll >se,me;
map<pair<ll,ll>,ll >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll > de,ne;
set<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[28][1600],cr[1600],dr[1600],br[30],er[130];

ll bigmod(ll a,ll b,ll c)
{

    long long int i,j,k;
    if(b==0)
    {
        return 1%c;
    }
    j = bigmod(a,b/2,c);
    j = (j*j)%c;
    if(b%2==1)
    {
        j=(j*a)%c;
    }
    return j;
}

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        i=1;
        for(char ch='a'; ch<='z'; ch++)
        {
            er[int(ch)]=i;
            i++;
        }
        cin>>st;
        cin>>et;
        cin>>k;
        for(i=0; i<26; i++)
        {
            if(et[i]=='0')
            {
                br[i+1]=1;
            }
        }
        for(i=0; i<st.size(); i++)
        {
            b = er[int(st[i])];
            ar[b][i]++;
        }
        u=0;
        o=0;
         for(i=0; i<st.size(); i++)
        {
            b = er[int(st[i])];
            x = bigmod(29,i,mod);
            y = bigmod(29,i,mod1);
                u = (u+((b*x)%mod))%mod;
                o = (o+((b*y)%mod1))%mod1;
                x = bigmod(x,mod-2,mod);
                y = bigmod(y,mod1-2,mod1);
                cr[i]=x;
                dr[i]=y;
              s.pb(u);
              vv.pb(o);
        }
        for(i=1; i<=26; i++)
        {
            for(j=1; j<st.size(); j++)
            {
                ar[i][j]=ar[i][j]+ar[i][j-1];
            }
        }
        n=st.size();
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                d=0;
                for(l=1; l<=26; l++)
                {
                    if(br[l]==1)
                    {
                        if(i>0) d = d+ar[l][j]-ar[l][i-1];
                        else d=d+ar[l][j];
                    }
                }

                if(d<=k){
                    if(i>0)l = (s[j]-s[i-1]+mod)%mod;
                    else l=s[j];
                    if(i>0)r = (vv[j]-vv[i-1]+mod1)%mod1;
                    else r=vv[j];




                    l = (l*cr[i])%mod;




                    r = (r*dr[i])%mod1;

                    //cout<<d<<" "<<i<<" "<<j<<" "<<l<<" "<<r<<endl;
                    mee[{l,r}]++;
                }
            }
        }
        cout<<mee.size()<<endl;
    }
}
