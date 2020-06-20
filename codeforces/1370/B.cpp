#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        d = 0;
        vv.clear();
        s.clear();
        e = n*2;
        for(i=1; i<=e; i++)
        {
            cin>>a;
            if(a%2==1){c++;s.pb(i);}
            else {d++;vv.pb(i);}
        }
        if(c%2==1 && d%2==1)
        {
            c = c-1;
            d = d-1;
        }
        else
        {
            if(c>0)c = c-2;
            else d=d-2;
        }
        for(i=0;i<c;i=i+2){
           cout<<s[i]<<" "<<s[i+1]<<endl;
        }
        for(i=0;i<d;i=i+2){
            cout<<vv[i]<<" "<<vv[i+1]<<endl;
        }
    }

}

