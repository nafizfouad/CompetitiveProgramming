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
typedef tree<ll, null_type, less<ll >, rb_tree_tag,
        tree_order_statistics_node_update>
        newset;
ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,vv,s;
vector< pair<pair<ll,ll>,ll> > ss,pp,hh,rr;
map<ll,ll> ta,pa,sa,ma;
map< ll,newset >se,me;
priority_queue<pair<ll,ll>,vector<pair<ll,ll> > > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll > li,si;


//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

char ar[505][505];
ll br[505][505];


int main()
{
    fast;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='*')br[i][j]=1;
                else br[i][j]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=1; j<m; j++)
            {
                br[i][j] += br[i][j-1];
            }
        }

        e=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ar[i][j]=='*')
                {
                    a  = i;
                    b = 1;
                    e++;
                    for(k=i+1; k<n; k++,b++)
                    {
                        c = j-b;
                        d = j+b;
                        if(c>=0 && d<m)
                        {
                            if(c>0)f = br[k][d]-br[k][c-1];
                            else f=br[k][d];
                            if(f-1==d-c)e++;
                            else break;
                        }
                        else break;
                    }
                    //cout<<e<<endl;
                }
            }

        }

        cout<<e<<endl;
    }

}
