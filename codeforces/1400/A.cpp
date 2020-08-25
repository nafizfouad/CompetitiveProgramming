#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        cin>>st;
        m = 0;
        d = 1;
        e = n;
        for(k=1; k<=e; k++)
        {
            c = 0;
            for(j=m; j<n; j++)
            {
               c++;
               if(c==d){et.pb(st[j]);d++;c=0;m++;n++;break;}
            }
        }
        cout<<et<<endl;
        et.clear();
    }

}
