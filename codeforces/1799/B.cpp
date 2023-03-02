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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s;
vector< pair<ll,ll> > v,ss,pp,vv,hh;
map<ll,ll > ta,pa,sa,ma;
map< pair<pair<ll,ll>, ll>,ll >se,me;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

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
            v.pb({a,i});
        }
        sort(v.begin(),v.end());
        if(v[0].first==v[n-1].first)cout<<0<<endl;
        else if(v[0].first==1 && v[n-1].first>1)cout<<-1<<endl;
        else
        {
            l = 0;
            o =0;
            while(o<=50)
            {
                x = 0;
                o++;
                r = 1e18;
                for(i=0; i<n; i++)
                {
                    b = v[i].first;
                    while(b>v[l].first)
                    {
                        d = b%v[l].first;
                        b = b/v[l].first;
                        if(d!=0)b++;

                        ss.pb({v[i].second,v[l].second});
                    }
                    if(b==v[l].first)x++;
                    v[i].first = b;
                    if(r>v[i].first)r=v[i].first,u=i;
                   // cout<<v[i].first<<" ";
                }
                //cout<<endl;
                l = u;
                if(x==n)break;
            }
            cout<<ss.size()<<endl;
            for(i=0;i<ss.size();i++){
                cout<<ss[i].first+1<<" "<<ss[i].second+1<<endl;
            }
        }
        ss.clear();
        v.clear();
    }
}
