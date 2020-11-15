#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#include<string.h>
#include<stdio.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    vector< pair<ll,ll> > ss;
    map<ll,vector<ll> > me;
    map<pair<ll,ll >,ll > pa,ta,sa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll ar[10][10];
    memset(ar,0,sizeof ar);
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>ar[i][j];
        }
        v.pb(i);
    }
    d = 0;
    do
    {
        c = 0;
        for(i=0;i+1<n;i++){
            if(i==0 && v[i]!=1)break;
            c = c+ar[v[i]][v[i+1]];
        }
        if(c!=0){c+=ar[v[n-1]][1];
        if(c==m)d++;}
        else break;
    }
    while(next_permutation(v.begin(), v.end()));
    cout<<d<<endl;
}

