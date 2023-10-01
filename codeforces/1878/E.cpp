/// 月よ、今こそ月明かりとなって落ちて、俺の周りに落ち続けて、それから私はあなたのものになる
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define mod 998244353
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
ll i,j,a,c,k,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
vector<vector<ll> > ii;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
map<ll,string >mee;
map<pair<ll,ll>,ll>mepp;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> li,si;

//    freopen("output.txt", "w", stdout);
//    freopen("sample.in", "r", stdin);

ll ar[200005][35];

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        for(i=0; i<n; i++)
        {
            a = v[i];
            s.cl;
            while(a)
            {
                if(a%2==0)
                {
                    s.pb(0);
                }
                else s.pb(1);
                a = a/2;
            }
            while(s.size()<=30)s.pb(0);
            ii.pb(s);
        }
        for(i=0; i<31; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ii[j][i]==1)
                {
                    p=j;
                    while(ii[j][i]==1)
                    {
                        j++;

                        if(j==n)break;
                    }
                    j--;
                    for(l=p; l<=j; l++)ar[l][i]=j+1;
                }
            }
        }
        for(i=0; i<m; i++)
        {
            a = ss[i].first-1;
            b = ss[i].second;
            c = b;
            d = 0;
            s.cl;
            ma.cl;
            si.cl;
            while(c)
            {
                if(c%2==1)s.pb(d),ma[d]=1;
                c = c/2;
                d++;
            }
            e=1e18;
g=-1;
//y++;
//            if(y==2462){
//                for(j=0;j<n;j++)cout<<v[j]<<"/";
//                cout<<";"<<a<<"/"<<b<<endl;
//            }
            if(s.size()==0)
            {
                cout<<n<<" ";
                con;
            }
            for(j=31; j>s[0]; j--)
            {
                if(ma[j]==0)si.insert(ar[a][j]),sa[j]=ar[a][j];
            }
            for(j=s[0]; j<=s[s.size()-1]; j++)
            {

                    if(ma[j]==0)si.erase(si.find(sa[j]));
                    else
                    {
                        auto it = si.rbegin();
                        //cout<<(*it)<<" "<<ar[a][j]<<" "<<i<<" "<<j<<endl;
                        if((*it)>=ar[a][j])
                        {

                            if(ar[a][j]==0 && (*it)==0){e=0;break;}
                            e = (*it);
                        }
                        else e = min(e,ar[a][j]);


                    }

            }

            if(e==1e18 || e==0)e=-1;
            if(si.size()){
                auto it = si.rbegin();
                if((*it)>0)e=max(e,(*it));
            }
            cout<<e<<" ";
        }
        cout<<endl;
        for(i=0; i<=n+2; i++)
        {
            for(j=0; j<=32; j++)
            {
                ar[i][j]=0;
            }
        }
        v.cl;
        s.cl;
        ss.cl;
        ii.cl;
    }
}


