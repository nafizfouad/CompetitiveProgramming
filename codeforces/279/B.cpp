#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll> s,vv,ss,v;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>t;
    c = 0;
    b = 0;
    m = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<n; i++)
    {
        c= c+v[i];
        //if(i>5 && i<11)cout<<c<<" "<<i<<endl;
        b++;
        if(c>t)
        {
            while(c>t)
            {
                c = c-v[m];
                m++;
                b--;
            }
            //cout<<i<<" hehe " <<b<<endl;
            s.push_back(b);
        }
        else if(c<=t)
        {
            //cout<<b<<" ki"<<i<<endl;
            s.push_back(b);
        }
    }
    s.push_back(b);
    sort(s.begin(),s.end());
    cout<<s[s.size()-1]<<endl;
}
