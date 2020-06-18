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
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    stack<char> sta;
    cin>>st;
    f = 0;
    for(i=0;i<n;i++){
        if(st[i]=='(')sta.push(st[i]);
        else{
            if(st[i]==')' && sta.size()==0 && f==0)f=1;
            else if(st[i]==')' && sta.size()==0 && f==1)f=2;
            else if(st[i]==')' && sta.size()!=0)sta.pop();
        }
    }
    if(f==2)cout<<"No"<<endl;
    else if(sta.size()>1)cout<<"No"<<endl;
    else if(sta.size()>0 && f!=1)cout<<"No"<<endl;
    else if(sta.size()==0 && f==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
