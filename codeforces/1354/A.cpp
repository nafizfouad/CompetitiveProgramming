#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv;
    map<ll,ll> ma,sa;
    map<char,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<endl;
        }
        else if(a>b && c<=d)
        {
            cout<<-1<<endl;
        }
        else
        {
            f = c-d;
            m  = a-b;
            n = m/f;
            if(m%f!=0)n++;
            n = n*c;
            cout<<b+n<<endl;
        }
    }

}
