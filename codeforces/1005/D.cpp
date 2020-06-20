#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<ll > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>st;
    c = 0;
    b = 0;
    m =0;
    for(i=0; i<st.size(); i++)
    {
        a = st[i]-'0';
        if(a%3==0){c++;m=0;b=0;}
        else{
            b = b*m+a;
            if(m!=0)m = m*10;
            else m=10;
            d = b;
            f =0;
            while(d){
                e = d%10;
                f = f+e;
                if(f%3==0){
                c++;m=0;b=0;
                break;
            }
                d = d/10;
            }

        }
    }
    cout<<c<<endl;
}

