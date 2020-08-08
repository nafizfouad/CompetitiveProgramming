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
    //vector<string> ss,vv,pp;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    c = -999999999999;
    for(i=0; i<n; i++)
    {
        cin>>a;
        ma[a]++;
        me[a].pb(i);
        if(ma[a]>c)c=ma[a];
    }
    if(c>m)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        j = 1;
        t = m;
        for(auto it = me.begin(); it!=me.end(); it++)
        {
            a = (*it).first;
            if(me[a].size()==1)
            {
                if(t==0)t=m;
                sa[me[a][0]]=t;
                t--;
            }
            else
            {
                for(i=0; i<me[a].size();i++)
                {
                    if(j>m)j=1;
                    sa[me[a][i]]=j;
                    j++;
                }
            }
        }
        for(i=0; i<n; i++)cout<<sa[i]<<" ";
        cout<<endl;
    }
}
