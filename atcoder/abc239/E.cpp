;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<vector>
#include<map>
#include<functional>
#include<string>
#include<queue>
#include<set>
#include<deque>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<list>
#include<iterator>
#include<cstring>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv[100005],hh;
vector<multiset<ll> > pp[100006],ss;
vector<pair<ll,ll> > rr;
map<ll,ll > ta,pa,sa,ma;
map<string,ll >se,me;
map<ll,vector<ll> >he;
priority_queue<ll,vector<ll>,greater<ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<char> de,ne;
multiset<ll > li,si;
newset see;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[100005];

void dfs(ll a)
{

    ll i,j,k,b,c;
    vector<ll> re;
    ar[a] = 1;
    for(i=0; i<vv[a].size(); i++)
    {
        if(ar[vv[a][i]]==0)
        {
            ar[vv[a][i]]=1;
            dfs(vv[a][i]);
            re.pb(vv[a][i]);
        }
    }
    li.clear();
    for(i=0; i<re.size(); i++)
    {
        l = re[i];
        if(vv[l].size()>1)li.insert(v[l-1]);

            j=0;

            for(auto it = pp[l][0].rbegin(); it!=pp[l][0].rend(); it++)
            {
                j++;

                if(j>20)break;
               li.insert((*it));
            }
    }
    si.clear();
    j=0;
    for(auto it = li.rbegin();it!=li.rend();it++){
        j++;
        if(j>20)break;
        si.insert((*it));
    }
    if(re.size()==0)si.insert(v[a-1]);

    pp[a].pb(si);
}

int main()
{
    fast;
    //cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<n-1; i++)
        {
            cin>>a>>b;
            vv[a].pb(b);
            vv[b].pb(a);
        }
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            rr.pb({a,b});
        }
        dfs(1);
        for(i=0;i<m;i++){

            a = rr[i].first;
            b = rr[i].second;
            j=0;
            pp[a][0].insert(v[a-1]);
            for(auto it = pp[a][0].rbegin();it!=pp[a][0].rend();it++){
                    j++;
                if(j==b){cout<<(*it)<<endl;break;}
            }
        }
    }
}



;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
