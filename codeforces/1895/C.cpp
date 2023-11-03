/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
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
ll i,j,a,k,b,n,t=1,m,p,q,y,z,h,r,l,x,u,o,w,c,d,e,f,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,v,vv;
vector<string > ss,pp,rr;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<pair<ll,ll> > de,ne;
multiset<ll > li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[7][7][50][50];

void cont(ll l,ll r,ll k,ll d)
{
    for(j=k; j>=r; j--)
    {
        p = j-d;
        if(p>=l)
        {
            g = g+ar[l][r][p][j];
        }
    }
}

int main()
{
    fast;

   // cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>st;
            ss.pb(st);
        }
        for(i=0; i<n; i++)
        {
            d=0;
            for(j=0; j<ss[i].size(); j++)
            {
                c = ss[i][j]-'0';
                d = d+c;
            }
            ma[i]=d;
            me[{ss[i].size(),d}]++;
            e=0;
            for(j=0; j<ss[i].size(); j++)
            {
                c = ss[i][j]-'0';
                e = e+c;
                ar[j+1][ss[i].size()-j-1][e][d-e]++;
            }
            ar[0][ss[i].size()][0][d]++;
        }
        g=0;
        for(i=0; i<n; i++)
        {
            c = ss[i].size();
            d = ma[i];
            if(c==1)
            {
                cont(1,2,18,d);
                cont(2,3,27,d);
                g = g+ar[0][1][0][d];
                //cout<<g<<endl;
            }
            else if(c==2)
            {
                cont(1,3,27,d);
                g = g+ar[0][2][0][d];
                //cout<<g<<endl;
            }
            else if(c==3)
            {
                cont(1,4,36,d);
                e=0;
                for(j=0; j<2; j++)
                {
                    c = ss[i][j]-'0';
                    e = e+c;
                }
                f = e-(ss[i][2]-'0');
                if(f>=0)
                {
                    g= g+ar[0][1][0][f];
                }
                g = g+ar[0][3][0][d];
                //cout<<g<<endl;
            }
            else if(c==4)
            {
                e=0;
                for(j=0; j<3; j++)
                {
                    c = ss[i][j]-'0';
                    e = e+c;
                }
                f = e-(ss[i][3]-'0');
                if(f>=0)
                {
                    g= g+ar[0][2][0][f];
                }
                g = g+ar[0][4][0][d];
               // cout<<g<<endl;
            }
            else if(c==5)
            {
                e=0;
                for(j=0; j<4; j++)
                {
                    c = ss[i][j]-'0';
                    e = e+c;
                }
                f = e-(ss[i][4]-'0');
                if(f>=0)
                {
                    g= g+ar[0][3][0][f];
                }
                e=0;
                for(j=0; j<3; j++)
                {
                    c = ss[i][j]-'0';
                    e = e+c;
                }
                f = e-((ss[i][4]-'0')+(ss[i][3]-'0'));
                if(f>=0)
                {
                    g= g+ar[0][1][0][f];
                }
                g = g+ar[0][5][0][d];
                //cout<<g<<endl;
            }
        }
//        for(auto x: me){
//            c = x.second;
//            g = g+((c*(c+1))/2);
//        }
        cout<<g<<endl;

        ma.cl;
        me.cl;
        ss.cl;
    }
}
