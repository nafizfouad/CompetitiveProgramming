#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;

    vector<ll > v,s;
    map<ll,ll > sa;

    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        d = 999999999999;
        e = 999999999999;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            if(a<e){e=a;}
        }
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.pb(a);
            if(a<d){d=a;}
        }
        c= 0;

        for(i=0; i<n; i++)
        {
            a = v[i]-e;
            b = s[i]-d;
            if(a>=b)c=c+a;
            else c=c+b;
        }
        cout<<c<<endl;
        s.clear();
        v.clear();
    }
}
