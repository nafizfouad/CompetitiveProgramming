#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<char,char> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll> > aq,tq;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
      cin>>n;
      cin>>st;
      for(i=1;i<=9;i++){
        char ch,ah;
        ah = i+'0';
        cin>>ch;
        ma[ah] = ch;
      }
      a = -1;
      b = -2;
      for(i=0;i<st.size();i++){
        if(ma[st[i]]>st[i]){
                a = i;
            while(ma[st[i]]>=st[i]){
                i++;
                if(i==st.size())break;
            }
            b=i-1;
            break;
        }
      }
      for(i=a;i<=b;i++){
        st[i] = ma[st[i]];
      }
      cout<<st<<endl;
}

