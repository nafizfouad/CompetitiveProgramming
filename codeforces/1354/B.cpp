#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv;
    map<char,ll> ma,sa;
    map<char,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>st;
        v.clear();
        ma.clear();
        d = 0;
        a = -1;
        b = -1;
        c = -1;
        for(i=0; i<st.size(); i++)
        {
            if(ma[st[i]]==0)
            {
                ma[st[i]]=1;
                d++;
                if(st[i]=='1')a=i;
                else if(st[i]=='2')b=i;
                else if(st[i]=='3')c=i;
                if(d==3)
                {
                    v.push_back(a);
                    v.push_back(b);
                    v.push_back(c);
                    sort(v.begin(),v.end());
                    f = ((v[2]-v[0])+1);
                    s.push_back(f);
                    v.clear();
                    ma.clear();
                    d = 0;
                    a = -1;
                    b = -1;
                    c = -1;
                    ma[st[i]]=1;
                    ma[st[i-1]]=1;
                    d=d+2;
                    if(st[i]=='1')a=i;
                    else if(st[i]=='2')b=i;
                    else if(st[i]=='3')c=i;
                    if(st[i-1]=='1')a=i-1;
                    else if(st[i-1]=='2')b=i-1;
                    else if(st[i-1]=='3')c=i-1;
                }
            }
            else if(ma[st[i]]==1 && d<3)
            {
                if(st[i]=='1')a=i;
                else if(st[i]=='2')b=i;
                else if(st[i]=='3')c=i;
            }
        }
        if(s.size()!=0){sort(s.begin(),s.end());cout<<s[0]<<endl;}
        else cout<<0<<endl;
        s.clear();
    }
}
