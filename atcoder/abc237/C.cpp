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
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> s,hh,vv,v;
vector<map<ll,ll> > ss,pp;
map<ll,char > ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
   // cin>>t;
    while(t--)
    {
        cin>>st;
        i=0;
        while(st[i]=='a'){
            c++;
            i++;
            if(i==st.size())break;
        }
        i=st.size()-1;
        while(st[i]=='a'){
            i--;
            d++;
            if(i<0)break;
        }
        e=d-c;
        if(e<0){cout<<"No"<<endl;continue;}
        for(i=1;i<=e;i++)et.pb('a');
        st = et+st;
        for(i=0,j=st.size()-1;i<=j;i++,j--){
            if(st[i]!=st[j]){f=1;break;}
        }
        if(f==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
