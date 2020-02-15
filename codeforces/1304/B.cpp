#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,a,b,c,d,n,t,l,f,x,y;
    vector<string> v,s;
    //vector<ll> ar,br;
    vector<ll> :: iterator it,ki;
    map<pair<ll,ll>, ll> ma,sa;
    string st,et,pt;
    cin>>t>>n;
    vector<ll> ar(150,0),br;
    et = "";
    pt = "";
    for(i=1; i<=t; i++)
    {
        cin>>st;
        v.push_back(st);
    }
    d = 0;
    for(i=0; i+1<t; i++)
    {
        f = 0;
        reverse(v[i].begin(),v[i].end());
        st  = v[i];
        reverse(v[i].begin(),v[i].end());
        for(j=i+1; j<t; j++)
        {
            if(st==v[j] && ar[j]==0)
            {
                pt = v[i]+pt+v[j];
                ar[j] = 1;
                f =1;
                break;
            }
            //cout<<pt<<endl;
        }
        if(st==v[i] && f==0 && d==0)
        {
            et = et+st;
            d = 1;
        }
    }
    if(ar[t-1]==0 && d==0){
       reverse(v[t-1].begin(),v[t-1].end());
        st  = v[t-1];
        reverse(v[t-1].begin(),v[t-1].end());
        if(st==v[t-1])
        {
            et = et+st;
            d = 1;
        }
    }
    f = pt.size()/2;
    if(d==1){pt.insert(f,et);}
    cout<<pt.size()<<endl;
    cout<<pt<<endl;
}
