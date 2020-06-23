#include<bits/stdc++.h>
#define ll unsigned long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<ll > v[310],s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);

    cin>>n;
    c = 0;
    d = 0;
    for(j=0; j<n; j++)
    {
        if(j%2==0){
             c= c+1;
             v[0].pb(c);
        }
        else if(j%2==1){
             d = d+n*2;
             v[0].pb(d);
             c = d;
        }
    }
    for(j=1;j<n;j++){
        for(i=0;i<n;i++){
            if(i%2==0){c = v[j-1][i]+1;v[j].pb(c);}
           else if(i%2==1){c = v[j-1][i]-1;v[j].pb(c);}
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }

}

