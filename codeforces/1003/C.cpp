#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<ll > v,s,vv;
    vector<ld> vld,td;
    map<ll,string> sa,ta,ma;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);

        cin>>n>>k;
        b = 0;
        c = 0;
        aa =0.0;
        bb = 0.0;
        cc = 0.0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        while(k<=n){
                aa = 0.0;
         for(i=0;i<k;i++){
            aa = aa+v[i];
        }
        bb = aa/k*1.0;
        vld.pb(bb);
        for(j=k,i=0;j<n;j++,i++){
            aa = aa+v[j];
            aa = aa-v[i];
            bb = aa/k*1.0;
            vld.pb(bb);
        }
        k++;
        sort(vld.begin(),vld.end(),greater<ld>());
        td.pb(vld[0]);
        vld.clear();
        }
        sort(td.begin(),td.end(),greater<ld>());
        cout<<fixed<<setprecision(15)<<td[0]<<endl;


}

