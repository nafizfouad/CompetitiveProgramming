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


    string st,et,im;

    cin>>st;
    cin>>et;
    cin>>im;
    

    for(i=0; i<im.size(); i++)
    {
        ma[im[i]]++;
    }
    f = 0;
    for(i=0; i<st.size(); i++)
    {
        if(ma[st[i]]!=0)
        {
            ma[st[i]]--;
        }
        else
        {
            f  = 1;
            break;
        }
    }
    for(i=0; i<et.size(); i++)
    {
        if(ma[et[i]]!=0)
        {
            ma[et[i]]--;
        }
        else
        {
            f  = 1;
            break;
        }
    }
    if(f==0)
    {
        if((st.size()+et.size())<im.size()){cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
    }
    else if(f==1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
