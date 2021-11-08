;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
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
vector<ll > s,vv,v,hh;
vector<string > ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<string, ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
multiset<ll> si,li;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll dp[100002][102];

ll mem(ll i,ll j)
{


    if(i==n-1)return 1;
    if(dp[i][j]!=-1)return dp[i][j]%1000000007;

    ll c=0,d,e,f;

    if(s[i+1]==0)
    {
        if(j-1>0)d = mem(i+1,j-1)%1000000007;
        else d = 0;
        e = mem(i+1,j)%1000000007;
        if(j+1<=m)f = mem(i+1,j+1)%1000000007;
        else f=0;
        c = (d+e+f)%1000000007;
    }
    else
    {
        if(abs(j-v[i+1])<=1)d = mem(i+1,v[i+1])%1000000007;
        else d=0;
        c = d;
    }
    return dp[i][j] = c%1000000007;

}

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>st;
            ss.pb(st);
        }
        p =0;
        for(i=0; i<ss[0].size(); i++)
        {

            d = 0;
            for(j=1; j<n; j++)
            {
                c = 0;
                for(k=0; k<ss[j].size(); k++)
                {
                    if(k!=i)
                    {
                        if(ss[j][k]!=ss[0][k])c++;
                    }
                }
                if(c>1)break;
                if(c==1)
                {
                   et.clear();
                   f= 0;
                   for(k=0;k<ss[j].size();k++){
                    if(k==i)et.pb(ss[j][k]);
                    else et.pb(ss[0][k]);
                   }
                   c = 0;
                   for(k=0;k<n;k++){
                        c = 0;
                    for(l=0;l<ss[k].size();l++){
                        if(ss[k][l]!=et[l])c++;
                    }
                    if(c>1){f=1;break;}
                   }
                   if(f==0){p=1;cout<<et<<endl;break;}
                   else break;
                }
                else d++;
            }
            if(d==n-1){cout<<ss[0]<<endl;p=1;}
            if(p==1)break;
        }
        if(p==0)cout<<-1<<endl;
        ss.clear();

    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
