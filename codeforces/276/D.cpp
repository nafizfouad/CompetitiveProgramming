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
vector<ll > s,v,hh,vv[10005];
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
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a = n;
        b = m;
        while(n){
            c++;
            v.pb(n%2);
            n = n/2;
        }
        while(m){
            d++;
            s.pb(m%2);
            m = m/2;
        }
        if(d>c){
            a = pow(2,d)-1;
            cout<<a<<endl;
        }
        else if(a!=b){
            reverse(v.begin(),v.end());
            reverse(s.begin(),s.end());
            for(i=0;i<v.size();i++){
                if(v[i]!=s[i]){
                    b = v.size()-i;
                    break;
                }
            }
            a = pow(2,b)-1;
            cout<<a<<endl;
        }
        else cout<<0<<endl;
    }

}
