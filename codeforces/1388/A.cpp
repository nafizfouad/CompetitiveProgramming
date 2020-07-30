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
    vector<ll> ss,vv,pp;
    map<ll,vector<ll> > mm;
    map<char,ll > ta,pa,ma;
    map<ll,ll > sa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=30)cout<<"NO"<<endl;
        else {
            b = n-30;
            cout<<"YES"<<endl;
            if(b==6){
             cout<<5<<" "<<6<<" "<<10<<" "<<15<<endl;
            }
            else if(b==10){
            cout<<6<<" "<<5<<" "<<14<<" "<<15<<endl;
            }
            else if(b==14){
               cout<<6<<" "<<10<<" "<<21<<" "<<7<<endl;
            }
            else{
              cout<<6<<" "<<10<<" "<<14<<" "<<b<<endl;
            }
        }
    }

}
