#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    vector<ll > v,s,vv;
    vector<ll> aa;
    map<ll,ll> ma,sa,ta;
    map<ll,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c = 0;
        d = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(i%2==0 && a%2!=0)
            {
                c++;
            }
            else if(i%2==1 && a%2!=1)d++;
            v.pb(a);
        }
        if(c==d)cout<<c<<endl;
        else if(c==0 && d==0)cout<<0<<endl;
        else cout<<-1<<endl;
    }

}
