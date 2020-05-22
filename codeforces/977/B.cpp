#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<pair<ll,ll> > s,vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    cin>>st;
    for(i=0; i+1<n; i++)
    {
        et.push_back(st[i]);
        et.push_back(st[i+1]);
        ma[et]++;
        et.clear();
    }
    d = -99999999999;
    for(auto it = ma.begin(); it!=ma.end(); it++)
    {
        if(d<(*it).second)
        {
            d=(*it).second;
            et = (*it).first;
        }
    }
    cout<<et<<endl;
}
