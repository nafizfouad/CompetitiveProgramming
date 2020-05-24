#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np;
    // vector<pair<ll,ll> > v;
    vector<ll > s,vv,ss,v;
    map<string,ll> ma,sa;
    char ar[55][55];
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    c=0;
    d = 0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        for(j=0; j<a; j++)
        {
            for(k=0; k<a; k++)
            {
                cin>>ar[j][k];
            }
        }
        d =0;
        for(j=0; j<a; j++)
        {
            f = 0;
            for(k=a-1; k>=0; k--)
            {
                if(ar[j][k]=='1' && k!=a-1 && j!=a-1){
                    if(ar[j+1][k]=='1' || ar[j][k+1]=='1')continue;
                    else {d = 1;break;}
                }
            }
            if(d==1)break;
        }
        if(d==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
