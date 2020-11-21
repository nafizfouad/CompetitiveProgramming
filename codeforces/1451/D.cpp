#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< pair<pair<ll,ll>,ll > > v,s,vv;
    vector<ll> ss,pp;
    map<ll,vector<ll> > me;
    map<char,ll > ta,pa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n>>k;
        c = n*n;
        x = 0;
        y = 0;
        for(j=1;;j++){
            x = x+k;
            y = y+k;
            d = (x*x)+(y*y);
            if(d>c){
                f = x-k;
                d = (f*f)+(y*y);
                if(d>c)e = (j-1)*2;
                else e = ((j-1)*2)+1;
                break;
            }
            else if(d==c){e = j*2;break;}
        }
        if(e%2==0)cout<<"Utkarsh"<<endl;
        else cout<<"Ashish"<<endl;
    }
}
