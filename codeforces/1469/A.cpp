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
    vector<ll > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll > > mm;
    map<ll, ll> ta,ma,pa,sa;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<char> sta,pta;
    list<ll> di,li;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>st;
        f =0;
        c = 0;
        d = -5;
        e = -1;
        x = 0;
        for(j=0; j<st.size(); j++)
        {
            if(st[j]=='(')sta.pb('('),e=j;
            else if(st[j]==')')
            {
                f = j;
                if(sta.size()==0)
                {

                }
                else sta.pop_back();
            }
            else if(st[j]=='?')
            {
                c++,d = j;
                if(x==0)g=j,x=1;
            }
        }
        if(sta.size()==0 && c%2==0)cout<<"Yes"<<endl;
        else if(sta.size()==0 && c%2==1)cout<<"No"<<endl;
        else if(sta.size()==1)
        {
            if(c>=2)
            {
                if(d>e && f>g && (c-2)%2==0)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else cout<<"No"<<endl;
        }
        sta.clear();
    }
}
