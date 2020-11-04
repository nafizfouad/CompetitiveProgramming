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
    vector<pair<ll,ll> > ss;
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
    cin>>n>>k;
    b = n/2;
    if(n==1 && k==0)cout<<1<<endl;
    else if(k<b || b==0)cout<<-1<<endl;
    else
    {
        c = k/b;
        d = k%b;
        m = 1;
        e = c+d;
        if(d!=0){
            cout<<e<<" "<<e*2<<" ";
            b--;
        }
        for(i=1;i<=b*2;i++){
            f = c*m;
            if(d==0)cout<<f<<" ";
            else if(f!=e && f!=e*2)cout<<f<<" ";
            else if(f==e || f==e*2)i--;
            m++;
        }
        if(n%2==1)cout<<1000000000<<" ";
        cout<<endl;
    }
    /// moulik songkha diye n ke bhag diye dekhte hobe k er cheye <= kina
}



