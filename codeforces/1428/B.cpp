#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll> sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        cin>>st;
        a = 0;
        b = 0;
        c = 0;
        f = 0;
        for(j=0;j<n;j++){
            if(st[j]=='-')a++;
            if(st[j]=='>')f++;
            if(st[j]=='<')b++;
        }
        for(j=0; j<n; j++)
        {
           if(st[j]=='-')c++;
           else if(j>0 && st[j-1]=='-')c++;
           else if(j==0 && st[n-1]=='-')c++;
           else if(st[j]=='<' && a+b==n)c++;
           else if(st[j]=='>' && a+f==n)c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
