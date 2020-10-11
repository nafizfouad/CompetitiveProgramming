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
    vector<ll > v,vv,s;
    vector<ll> ss,pp;
    map<char,ll > mm;
    map<ll, ll > sa,ta,ma,pa;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<char,vector<ll>,greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        if(n==1 || n==4 || n==2)cout<<-1<<endl;
        else if(n%3==0){
            cout<<n/3<<" "<<0<<" "<<0<<endl;
        }
       else if(n%5==0){
            cout<<0<<" "<<n/5<<" "<<0<<endl;
        }
       else if(n%7==0){
            cout<<0<<" "<<0<<" "<<n/7<<endl;
        }
        else if(n%8==0){
            cout<<n/8<<" "<<n/8<<" "<<0<<endl;
        }
        else if(n%5==1){
            cout<<2<<" "<<n/5-1<<" "<<0<<endl;
        }
        else if(n%5==2){
            cout<<0<<" "<<n/5-1<<" "<<1<<endl;
        }
        else if(n%5==3){
            cout<<1<<" "<<n/5<<" "<<0<<endl;
        }
        else if(n%5==4){
            if(n%3==1 && n>4){
                cout<<n/3-2<<" "<<0<<" "<<1<<endl;
            }
            else if(n%3==2 && n>2){
                cout<<n/3-1<<" "<<1<<" "<<0<<endl;
            }
            else cout<<-1<<endl;
        }
    }
    return 0;
}
