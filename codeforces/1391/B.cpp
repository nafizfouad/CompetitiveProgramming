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
    //cout<<3||3<<" "<<2||3<<" "<<3||4<<endl;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char ch;
        c = 0;
        for(i=0; i<n; i++)
        {
            for(j=0;j<m;j++){
                cin>>ch;
                if(i==n-1 && ch=='D')c++;
                else if(j==m-1 && ch=='R')c++;
            }
        }
        cout<<c<<endl;
    }

}
