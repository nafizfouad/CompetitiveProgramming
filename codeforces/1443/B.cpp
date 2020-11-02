#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
using namespace std;


int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,pair<ll,ll> > me;
    map<ll ,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a>>b;
        cin>>st;
        f = 1;
        h = 0; g = -1;
        for(j=0; j<st.size(); j++)
        {
            if(st[j]=='1' && f==1)
            {
                h=j;
                f=0;
            }
            if(st[j]=='1')
            {
                g=j;
            }
        }
        d = 0;
        e = 0;
        p = 0;
        for(j=h; j<=g && j<st.size(); j++)
        {
            p = 1;
            if(st[j]=='0')
            {
                c = 0;
                while(st[j]=='0')
                {
                    c = c+b;
                    j++;
                    if(j==st.size())break;
                }
                if(c>a)
                {
                    d = d+a+e;
                    e = 0;
                }
                else e = e+c;
            }
        }
        if(p==0)d = 0;
        else if(e==0 && p!=0)d=d+a;
        else d = d+a+e;
        cout<<d<<endl;
    }

    /// moulik songkha diye n ke bhag diye dekhte hobe k er cheye <= kina
}



