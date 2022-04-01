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
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<vector<ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
priority_queue<ll> de,ne;
multiset<pair<ll,ll> > li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

ll ar[200005],br[200005];

int main()
{
    fast;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;

        l = 0;
        r = 0;
        for(i=0;i<n;i++){
                d = 0;
                if(st[i]=='+')l++;
                else r++;
                ar[i] = l;
                br[i] = r;
           for(j=i;j+1<n;j++){
               if(st[j]==st[j+1]){
                    c=0;
                    me[{i,j}]=d;
                while(st[j]==st[j+1]){
                    c++;
                    if(c%2==0){
                        me[{i,j+1}] = d+c/2;
                    }
                    else me[{i,j+1}] = d+(c/2)+1;
                    j++;
                    if(j==n-1)break;
                }
                 if(c%2==0)d = d+(c/2);
                 else d= d+(c/2)+1;
               }
               else me[{i,j}] = d;
           }
           if(n>1){
            if(st[n-1]!=st[n-2])me[{i,n-1}] = me[{i,n-2}];
           }
        }
//        for(auto it = me.begin();it!=me.end();it++){
//            cout<<(*it).first.first<<" "<<(*it).first.second<<" -> "<<(*it).second<<endl;
//        }
        e = 0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(i!=0)a = ar[j]-ar[i-1];
                else a= ar[j];
                if(i!=0)b = br[j]-br[i-1];
                else b= br[j];
          //  cout<<i<<" "<<j<<" "<<a<<" "<<b<<endl;
                if(a==b)e++;
                else {
                    p = b-a;
                    if(p%3==0 && p>0 && (p/3)<=me[{i,j}]){
                        //cout<<p/3<<" "<<me[{i,j}]<<" "<<i<<" "<<j<<endl;
                        e++;
                    }
                }
            }
        }
        for(i=0;i<n+3;i++)ar[i]=0,br[i]=0;
        cout<<e<<endl;
        me.clear();
    }
}

