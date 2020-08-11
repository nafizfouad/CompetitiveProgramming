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
    cin>>st;
    f = 0;
    c=0;
    d = -1;
    for(i=0; i<st.size(); i++)
    {
    if(st[i]=='2' && f==0){d=i;f=1;}
    if(st[i]=='1')c++;
    }
    if(d==-1 && c!=0){
        for(i=0;i<st.size();i++){
            if(st[i]=='0')cout<<st[i];
        }
        for(i=1;i<=c;i++)cout<<'1';
        cout<<endl;
    }
    else if(c==0 && d!=-1){
        cout<<st<<endl;
    }
    else if(c==0 && d==-1)cout<<st<<endl;
    else{
    for(i=0;i<d;i++){
        if(st[i]=='0')cout<<st[i];
    }
    for(i=1;i<=c;i++){
        cout<<'1';
    }
    for(i=d;i<st.size();i++){
        if(st[i]!='1')cout<<st[i];
    }
    cout<<endl;}
}
