#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
#define mod 1000000007
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define MAXN 32000
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>newset;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,v,hh,vv;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<ll, set<ll> >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f = 0;
        for(i=0; i<n; i++)
        {
           cin>>a;
           v.pb(a);
        }
        c = 0;
        for(i=1;i+1<n;i++){
            if(v[i]>v[i+1] && v[i]>v[i-1])c++,ma[i]=1;
            if(v[i]<v[i+1] && v[i]<v[i-1])c++,ma[i]=1;
        }
        e = c;
        for(i=1;i+1<n;i++){
            a = v[i];

            b = c-ma[i]-ma[i-1]-ma[i+1];
            v[i] = v[i+1];
            if(v[i]>v[i+1] && v[i]>v[i-1])b++;
            if(v[i]<v[i+1] && v[i]<v[i-1])b++;
            if(i>1){
                if(v[i-1]>v[i-2] && v[i-1]>v[i])b++;
                if(v[i-1]<v[i-2] && v[i-1]<v[i])b++;
            }
            if(i+2<n){
                if(v[i+1]>v[i+2] && v[i+1]>v[i])b++;
                if(v[i+1]<v[i+2] && v[i+1]<v[i])b++;
            }
            e = min(e,b);

            b = c-ma[i]-ma[i-1]-ma[i+1];
            v[i] = v[i-1];
            if(v[i]>v[i+1] && v[i]>v[i-1])b++;
            if(v[i]<v[i+1] && v[i]<v[i-1])b++;
            if(i>1){
                if(v[i-1]>v[i-2] && v[i-1]>v[i])b++;
                if(v[i-1]<v[i-2] && v[i-1]<v[i])b++;
            }
            if(i+2<n){
                if(v[i+1]>v[i+2] && v[i+1]>v[i])b++;
                if(v[i+1]<v[i+2] && v[i+1]<v[i])b++;
            }
            e = min(e,b);
            v[i] = a;
        }

        cout<<e<<endl;
        v.clear();ma.clear();sa.clear();
    }

}
