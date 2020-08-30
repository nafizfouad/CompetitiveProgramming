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
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        b = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            b = b+a;
        }
        sort(v.begin(),v.end());
        if(b%2==1 || n==1)cout<<"T"<<endl;
        else if(n==2 && v[0]<v[1])cout<<"T"<<endl;
        else if(b%2==0){
            b = b-v[n-1];
            if(b<v[n-1])cout<<"T"<<endl;
            else cout<<"HL"<<endl;
        }
        v.clear();
    }
}
