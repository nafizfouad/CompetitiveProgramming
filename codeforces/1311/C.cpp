#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll i,j,k,a,b,c,d,f,n,t,m;
    vector<ll> v,s;
    map<char,ll> vv,pp;
    vector< map<char,ll> > ma,sa;
     map<char,ll> :: iterator it,ki;
    char ch;
    //map<ll,ll> :: iterator it,ki;
    string st,et;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        ma.clear();
        pp.clear();
        v.clear();
        vv.clear();
        st.clear();
        cin>>n>>m;
        cin>>st;
        st = "C"+st;
        for(j=1; j<=m; j++)
        {
            cin>>a;
            v.push_back(a);
        }
        v.push_back(n);
        for(j = 97;j<=122;j++){
            pp[char(j)] = 0;
        }
        for(j=1; j<=st.size(); j++)
        {
            vv[st[j]]++;
            ma.push_back(vv);
        }
        for(j=0;j<m+1;j++){
            for(it = ma[v[j]-1].begin();it!=ma[v[j]-1].end();it++){
               pp[(*it).first] = pp[(*it).first]+((*it).second);
            }
        }
        for(it= pp.begin();it!=pp.end();it++){
            cout<<(*it).second<<" ";
        }
        cout<<endl;
    }
}
