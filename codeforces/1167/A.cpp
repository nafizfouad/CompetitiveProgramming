#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,l,nl,np,x,y,x1,y2,y1,x2;
    vector<ll > s;
    vector<pair<ll,ll> > vv,ss,v;
    map<string,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        cin>>st;
        for(j=0;j<st.size();j++){
            if(st[j]=='8')break;
        }
        d = 0;
        for(k=j+1;k<st.size();k++){
           d++; 
           if(d==10){break;}
        }
        if(d==10)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
