#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll a,b,c,n,d,f,m,x1,x2,y2,y1,x3,x4,y3,y4,s;
    ll i,j,k,t;
    vector<ll> v;
    vector<ll> :: iterator it,ki;
    map<char,ll>  ma;
    map<ll, pair<ll,ll> >  sa;


    string st;
    cin>>t;
    cin>>st;

    transform(st.begin(),st.end(),st.begin(),::tolower);
    for(i=0; i<t; i++)
    {
    if(ma[st[i]]==0){
        ma[st[i]] = 1;
    }
    }
    if(ma.size()==26){
        cout<<"YES"<<endl;
    }
else if(ma.size()!=26){
        cout<<"NO"<<endl;
    }
    return 0;
}
