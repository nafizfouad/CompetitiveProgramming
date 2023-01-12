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
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,c,b,n,k,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,gg,cc;
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

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
            s.pb(0);
            vv.pb(0);
        }
        l = 1;
        r = 1000000000;
        e = 1;
        while(l<=r)
        {
            m = (l+r)/2;

//            cout<<m<<endl;
//            for(i=0; i<n; i++)
//            {
//                cout<<v[i]<<" ";
//            }
//            cout<<endl;
//cout<<m<<endl;
            f = 0;
            for(i=n-1; i>=2; i--)
            {
                if(v[i]<m)
                {
                    // cout<<i<<" "<<v[i]<<" "<<m<<endl;
                    f=1;
                    break;
                }
                else
                {
                    a = v[i]-m;

                    p = v[i]-s[i];

                    if(a>=p)c=p;
                    else c = p-(p-a);

                    if(c>0)
                    {
                        //cout<<c<<" "<<i<<" "<<v[i]<<" "<<s[i]<<endl;
                        b = c/3;
                        v[i]-=b*3;
                        v[i-1]+=b;
                        v[i-2]+=b*2;

                        vv[i]+=b*3;
                        s[i-1]+=b;
                        s[i-2]+=b*2;
                    }



                }
            }

            if(v[0]<m || v[1]<m)
            {

                f=1;
            }
            for(i=n-1; i>=0; i--)
            {
                v[i]-=s[i];
                v[i]+=vv[i];
                s[i]=0;
                vv[i]=0;
            }
            if(f==0)
            {
                e = max(e,m);
                l = m+1;
            }
            else r=m-1;
        }
        cout<<e<<endl;
        v.clear();
        s.clear();
        vv.clear();
    }

}
