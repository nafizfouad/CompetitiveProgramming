#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

ll ar[125][100005],br[125];

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<pair<ll,ll> ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);


    cin>>st;
    f =0;
    for(i=0;i<st.size();i++){
        a = int(st[i]);
        br[a]++;
        if(br[a]>f)f=br[a];
        for(j=97;j<=122;j++){
            ar[j][i] = ar[j][i]+br[j];
        }
    }
    for(i=0;i<st.size();i++){
        a = int(st[i]);
        for(j=97;j<=122;j++){
            b = ar[j][st.size()-1]-ar[j][i];
            ma[{a,j}] = ma[{a,j}]+b;
            if(ma[{a,j}]>f)f=ma[{a,j}];
        }
    }
    cout<<f<<endl;
}

