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
vector<ll > s,v,hh;
vector<pair<ll,ll> > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<char, deque<ll> >se,me;
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
        for(i=0; i<2*n; i++)
        {
            cin>>a;
            v.pb(a);
            ma[a]++;
        }
        sort(v.begin(),v.end());
        sa = ma;
        k = 0;
        for(i=0; i+1<v.size(); i++)
        {
            ma = sa;
            b = v[v.size()-1]+v[i];
            f = 0;
            ss.clear();
            for(j=v.size()-1; j>=0; j--)
            {
                if(ma[v[j]]>0){
                    c = b-v[j];
                    ma[v[j]]--;
                    if(ma[c]>0)ma[c]--,b=v[j],ss.pb({c,v[j]});
                    else {f = 1;break;}
                }
            }
            ma.clear();
            if(f==0){
                k = 1;
                cout<<"YES"<<endl;
                cout<<v[v.size()-1]+v[i]<<endl;
                for(i=0;i<ss.size();i++){
                    cout<<ss[i].first<<" "<<ss[i].second<<endl;
                }
                break;
            }
        }
        if(k==0)cout<<"NO"<<endl;
        ma.clear();
        ss.clear();
        sa.clear();
        v.clear();
    }

}
