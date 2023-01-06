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
ll i,j,a,c,b,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o,w;
ld aa,bb,ee,dd,ff,gg,cc;
vector<vector<string> > s,hh,vv,v;
vector<pair<ll,ll> > ss,pp;
map<ll,ll> ta,pa,sa,ma;
map<pair<ll,ll>,ll >se,me;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

ll ar[8][500000];

int main()
{
    fast;

    //cin>>t;

    while(t--)
    {
        cin>>n>>m;
        cin>>st;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            ss.pb({a,b});
        }
        ft = "abc";
        do{
            et = ft;
            while(et.size()<st.size())et=et+et;
            d++;
            c = 0;
            for(i=0;i<n;i++){
                if(st[i]!=et[i])c++;
                ar[d][i]=c;
            }

        }while(next_permutation(ft.begin(),ft.end()));

        for(i=0;i<m;i++){
            a = ss[i].first-1;
            b = ss[i].second-1;

            if(a>0){
                c = min(ar[1][b]-ar[1][a-1],ar[2][b]-ar[2][a-1]);
            //cout<<c<<endl;
            c = min(c,min(ar[3][b]-ar[3][a-1],ar[4][b]-ar[4][a-1]));
            //cout<<c<<endl;
            c = min(c,min(ar[5][b]-ar[5][a-1],ar[6][b]-ar[6][a-1]));
           // cout<<c<<endl;
            }
            else{
                c = min(ar[1][b],ar[2][b]);
                c = min(c,min(ar[3][b],ar[4][b]));
                c = min(c,min(ar[5][b],ar[6][b]));
            }
            cout<<c<<endl;
        }

    }

}
