#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll i,j,k,a,b,c,n,t,f,m,l,d;
    vector<ll> v,s;
    map<ll,ll> ma,sa,pa;
    map<ll,ll> :: iterator it,ki;
    string st,vt;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        ma[a]++;
        v.push_back(a);
    }
    for(i=1; i<=m; i++)
    {
        cin>>a;
        sa[a]++;
    }
    for(i=0; i<n; i++)
    {
        //cout<<sa[v[i]]<<endl;
        if(sa[v[i]]>0)
        {
            //cout<<"dfk"<<endl;
            d = sa[v[i]]-ma[v[i]];
            ma[v[i]] = ma[v[i]]-sa[v[i]];
            //cout<<ma[v[i]]<<endl;
            if(ma[v[i]]<=0)
            {
                ma[v[i]] = -100;
                // cout<<"kdf"<<endl;
                sa[v[i]] = d;
            }
        }
    }
    ll su = 0;
    for(i=0; i<n; i++)
    {
        if(ma[v[i]]!=-100)
        {
            f = 0;
            for(it = sa.begin(); it!=sa.end(); it++)
            {
                if((*it).first>=v[i])
                {
                    if(sa[(*it).first]>0)
                    {
                        sa[(*it).first]= sa[(*it).first]-1;
                        f = 1;
                        break;
                    }

                }
            }
            if(f==0)
            {
                su++;
            }
        }
    }
    cout<<su<<endl;
}