#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,ll> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>st;
    e = 0;
    for(i=0;i+1<st.size();i++){
        if(st[i]=='A' && st[i+1]=='B'){c = i;d = i+1;e=1;}
    }
    f = 0;
    for(i=0;i+1<st.size();i++){
        if(st[i]=='B' && st[i+1]=='A'){
            if(c!=i && d!=i && c!=i+1 && d!=i+1){f=1;break;}
        }
    }
    if(f==1 && e==1)cout<<"YES"<<endl;
    else{
      e = 0;
    for(i=0;i+1<st.size();i++){
        if(st[i]=='B' && st[i+1]=='A'){c = i;d = i+1;e=1;}
    }
    f = 0;
    for(i=0;i+1<st.size();i++){
        if(st[i]=='A' && st[i+1]=='B'){
            if(c!=i && d!=i && c!=i+1 && d!=i+1){f=1;break;}
        }
    } 
    if(f==1 && e==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    }
}


