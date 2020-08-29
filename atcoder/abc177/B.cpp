#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

#define MAXN 1000001

int spf[MAXN],ar[MAXN];

void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
        {spf[i] = i; ar[i]=0;}
    for (ll i=4; i<MAXN; i+=2)
        {spf[i] = 2; ar[i]=0;}

    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {   ar[i] = 0;
            for (ll j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    {spf[j] = i;
                    ar[j]=0;}
        }
    }
}

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s;
//    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
//    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
//    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>st;
    cin>>et;
    e = et.size();
    c = 0;
    for(i=0;i<st.size();i++){
            c = 0;
        for(j=i,k=0;k<et.size() && j<st.size();j++,k++){
            if(st[j]!=et[k]){
                c++;
            }
            if(k==et.size()-1 && j<st.size())e = min(c,e);
        }
    }
    cout<<e<<endl;
}
