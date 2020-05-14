#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<string> v,s,vv,ss;
    map<string,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>st;
        cin>>et;
        if(st.size()>et.size()){
            ma[st] = et;
            ma[et] = et;
        }
        else if(st.size()<=et.size()){
            ma[st] = st;
            ma[et] = st;
        }
    }
    for(i=1;i<=n;i++){
        cin>>st;
        v.push_back(st);
    }
    for(i=0;i<n;i++){
        cout<<ma[v[i]]<<" ";
    }
    cout<<endl;
}


