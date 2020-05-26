#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np,x,y,x1,y2,y1,x2;
    vector<ll > s;
    vector<ll > vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        for(j=0; j<a; j++)
        {
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        c = 1;
        d = 1;
        e = 0;
        f = 0;
        for(j=0; j<a; j++)
        {
            if(v[j]<=c)
            {
                d++;
                c++;
            }
            else
            {
                if(v[j]-d<=0)
                {
                    d++;
                    c = d;
                }
                else
                {
                    d++;
                }
            }
        }
        cout<<c<<endl;
        v.clear();

    }
}
