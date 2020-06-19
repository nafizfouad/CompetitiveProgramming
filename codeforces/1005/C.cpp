#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<ll > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        ma[a]++;
    }
    for(i=0; i<31; i++)
    {
    c = pow(2,i);
    s.pb(c);
    }
    sort(s.begin(),s.end());
    d =0;
    for(i=0;i<n;i++){
            f =0;
        for(j=0;j<31;j++){
            if(v[i]<=s[j]){
                b = s[j]-v[i];
                if(b==v[i] && ma[b]>1){f=1;break;}
                else if(b!=v[i] && ma[b]>0){f=1;break;}
            }
        }
        if(f==0)d++;
    }
    cout<<d<<endl;
}

