#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,e,m,p,q,d,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg,pp;
    vector<ll > v,s,vv,tt;
    vector<ll> ss;
    map<pair<ll,ll>,ll > me;
    map<ll,ll > ta,pa,ma,sa;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    set<ll> sett;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>st;
        if(st[0]=='2' && st[1]=='0' && st[2]=='2' && st[3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(st[0]=='2' && st[1]=='0' && st[n-2]=='2' && st[n-1]=='0')
        {
            cout<<"YES"<<endl;
        } 
        else if(st[0]=='2' && st[1]=='0' && st[2]=='2' && st[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(st[0]=='2' && st[n-3]=='0' && st[n-2]=='2' && st[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(st[n-4]=='2' && st[n-3]=='0' && st[n-2]=='2' && st[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
