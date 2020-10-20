#include<iostream>
#include<bits/stdc++.h>
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
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        f = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            if(a>f)
            {
                f=a;
                c=i;
            }
            ma[a]++;
        }
        if(ma[f]==1)cout<<c+1<<endl;
        else if(ma.size()==1)cout<<-1<<endl;
        else if(c+1==1)
        {
            for(j=0; j<n; j++)
            {
                if(v[j]==f)
                {
                    c=j;
                }
                else
                {
                    break;
                }
            }
            cout<<c+1<<endl;
        }
        else if(c+1==n)
        {
            for(j=n-1; j>=0; j--)
            {
                if(v[j]==f)c=j;
                else break;
            }
            cout<<c+1<<endl;
        }
        else cout<<c+1<<endl;
        ma.clear();
        v.clear();
    }
}
