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
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        e = 0;
        if(a%2==1)e++;
        if(b%2==1)e++;
        if(c%2==1)e++;
        if(d%2==1)e++;
        if(e<=1)cout<<"Yes"<<endl;
        else if(e==2)cout<<"No"<<endl;
        else if(e==4)cout<<"Yes"<<endl;
        else if(e==3){
            if(b%2==1 && c%2==1 && d%2==1 && a>0)cout<<"Yes"<<endl;
        else if(a%2==1 && c%2==1 && d%2==1 && b>0)cout<<"Yes"<<endl;
        else if(a%2==1 && b%2==1 && c%2==1)cout<<"Yes"<<endl;
        else if(a%2==1 && b%2==1 && d%2==1 && c>0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
    }
}