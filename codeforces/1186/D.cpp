#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,e;
    vector<ll > v,s,vv,tt;
    vector<ll> ss,pp;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    c = 0;
    for(i=0;i<n;i++){
        cin>>aa;
        f = 0;
        if(fmod(abs(aa),2)==0.0 || fmod(abs(aa),2)==1.0)f=1;
        if(aa>0.00000)aa = ceil(aa);
        else aa = floor(aa);
        b = aa;
        if(f==1)ma[b]=1;
        c = c+b;
        v.pb(b);
    }
    if(c==0){
        for(auto a : v){
            cout<<a<<endl;
        }
    }
    else if(c>0){
        for(i=0;i<n;i++){
            if(v[i]>0 && ma[v[i]]!=1){
                v[i]--;
                c--;
            }
            if(c==0)break;
        }
        for(auto a : v){
            cout<<a<<endl;
        }
    }
     else if(c<0){
        for(i=0;i<n;i++){
            if(v[i]<0 && ma[v[i]]!=1){
                v[i]++;
                c++;
            }
            if(c==0)break;
        }
        for(auto a : v){
            cout<<a<<endl;
        }
    }
}
