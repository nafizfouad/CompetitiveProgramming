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
        sa.clear();
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(sa[a]==0)
            {
                v.pb(a);
                sa[a]=1;
            }
        }

        c= 0;

        sort(v.begin(),v.end());

        for(i=0; i+1<v.size(); i++)
        {
            e = v[i+1]-v[i];
            if(e>1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
