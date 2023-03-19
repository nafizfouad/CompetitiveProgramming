#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
//#define endl '\n'
#define MAXN 200006
#define mod 998244353
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#pragma GCC optimize("O3,Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,tune=native")
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,z,h,r,l,x,u,o,w,g;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll > s,hh,vv,v;
vector<pair<ll,ll> > pp,ss;
map<char,vector<ll> > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<pair<ll,ll> > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>a>>b>>c>>d>>st;
        if(st=="DL")p=1;
        if(st=="DR")p=2;
        if(st=="UL")p=3;
        if(st=="UR")p=4;
        f = 0;
        while(1){
                //cout<<a<<" "<<b<<endl;
                if(a==c && b==d)break;
                me[{a,b}]++;
                if(me[{a,b}]>4){f=-1;break;}

            if(p==1){
                a++;
                b--;

                if(a==n+1 && b==0){
                    p=4;
                    f++;
                    a--;
                    b++;
                }
                else if(a<1 || a>n || b<1 || b>m){
                    f++;
                    if(b<1)p=2;
                    else p=3;
                    a--;
                    b++;

                }
            }
            else if(p==2){
                a++;
                b++;

                if(a==n+1 && b==m+1){
                    p=3;
                    f++;
                    a--;
                    b--;
                }
                else if(a<1 || a>n || b<1 || b>m){
                    f++;
                    if(b>m)p=1;
                    else p=4;
                    a--;
                    b--;

                }
            }
            else if(p==3){
                a--;
                b--;

                if(a==0 && b==0){
                    p=2;
                    f++;
                    a++;
                    b++;
                }
                else if(a<1 || a>n || b<1 || b>m){
                    f++;
                    if(b<1)p=4;
                    else p=1;
                    a++;
                    b++;
                }
            }
            else{
                a--;
                b++;

                if(a==0 && b==m+1){
                    p=1;
                    f++;
                    a++;
                    b--;
                }
                else if(a<1 || a>n || b<1 || b>m){
                    f++;
                    if(b>m)p=3;
                    else p=2;
                   a++;
                    b--;
                }
            }
        }
        cout<<f<<endl;
        me.clear();
    }

}
