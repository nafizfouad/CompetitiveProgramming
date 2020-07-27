#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,y,g,z,h;
    vector<ll > v,s;
    map<ll,ll> mp;

    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mp.clear();
        v.clear();
        s.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        for(i=0; i<m; i++)
        {
            cin>>b;
            s.pb(b);
            mp[b]=1;
        }
        j=0;
        p=0;
        ll l=0;
        for(i=0; i<m; i++)
        {
            ll r=s[i];
            if(mp[r]==1)
            {
                while(j<n)
                {
                    ll x=v[j];
                    if(mp[x]==1 && x!=r)
                    {
                        p++;
                        mp[x]=0;
                    }
                    if(x==r)
                    {
                        p+=(2*l+1);
                        j++;
                        mp[r]=0;
                        break;
                    }
                    l++;
                    j++;
                }
            }
            else
            {
                l--;
            }
        }
        cout<<p<<"\n";
    }
}
