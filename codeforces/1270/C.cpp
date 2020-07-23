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
    vector<ll > v,vv;
    vector<ll> s[1010];
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    // 12 1 10 8
    cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            c = c+a;
            if(i>0)d = d^a;
            if(i==0)d=a;
        }
        d = d*2;
        e = d-c;
        if(e==0)cout<<0<<endl<<endl;
        else if(e>0)
        {
            if(e%2==0)cout<<2<<endl<<e/2<<" "<<e/2<<endl;
            else
            {
                c++;
                d = d-2;
                e = d-c;
                if(e>0)cout<<3<<" "<<1<<" "<<e/2<<" "<<e/2<<endl;
                else{
                        c--;
                      d = d+2;
                d= d/2;
                   if(d==0)
            {

                c= c+4;
                cout<<3<<endl;
                cout<<2<<" "<<2<<" "<<c<<endl;
            }
            else
            {
                cout<<2<<endl;
                c = c+d;
                cout<<d<<" "<<c<<endl;
            }
                }
            }
        }
        else
        {
            if(d==0)
            {
                c= c+4;
                cout<<3<<endl;
                cout<<2<<" "<<2<<" "<<c<<endl;
            }
            else
            {
                d = d/2;
                cout<<2<<endl;
                c = c+d;
                cout<<d<<" "<<c<<endl;
            }
        }
    }

}
