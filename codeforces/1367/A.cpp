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
    cin>>n;
    c = 0;
    for(i=0; i<n; i++)
    {
        cin>>st;
        for(j=0;j<st.size();j++){
            if(j%2==0)cout<<st[j];
        }
        if(st.size()%2==0)cout<<st[st.size()-1];
        cout<<endl;
    }
}
