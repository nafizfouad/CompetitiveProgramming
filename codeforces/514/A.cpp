#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,f,e,a,b;
    vector<ll > vv,ss,v,s;
    string st,et;
    map<ll,ll> pa,ea;
    queue<ll> q;
    cin>>st;
    for(i=0;i<st.size();i++){
        c = st[i]-'0';
        c = 9-c;
        if(c==0 && i==0)cout<<9;
        else if(c>=5)cout<<st[i];
        else cout<<c;
    }
    cout<<endl;
}
