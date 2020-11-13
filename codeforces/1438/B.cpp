#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,cc,rr,kk,gg;
    vector<ll > v,s;
    vector<pair<ll,ll> > ss,pp;
    map<ll,ll > ma;
   // map<pair<ld, ld>,ll>  sa,ta,ma,pa;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        ma.clear();
        c = 0;
        for(j=1; j<=a; j++)
        {
            cin>>b;
            ma[b]++;
            if(ma[b]>1)c=1;
        }
        if(c==1)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}
