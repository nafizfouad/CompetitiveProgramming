#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<ll,ll > ma;
vector<ll> ki;
vector<pair<ll,ll> > it;
void sieve()
{
    ma[1] = 1;
    int i;;
    for( i=3; i*i<=20000010; i=i+2)
    {
        if(ma[i]==0)
        {
            for(int j=i*i; j<=20000010; j=j+(2*i))
            {
                ma[j] = 1;
            }
        }

    }
    int c1,c2;
    c1 = 3;
    c2 = 3;
    for(i=5; i<=20000010; i=i+2)
    {
        if(ma[i]==0)
        {
            c1=c2;
            c2=i;
            if((c2-c1)==2)
            {
                it.push_back({c1,c2});
            }
        }
    }
}

int main()
{

    ll i,j,k,a,b,c,n,t,m,d,r,g,y,f;
    vector<ll> v,s,ss,vv;
    map<ll,ll> ma,ha;
    string st,et,mt;
    long double aa,bb;
    cin>>n;
    for(i=1;i<n;i++){
        cin>>a;
        ma[a]++;
    }
    for(i=1;i<=n;i++){
        cout<<ma[i]<<endl;
    }
}
