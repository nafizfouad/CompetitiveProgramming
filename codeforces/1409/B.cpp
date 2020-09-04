#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    map<char,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>t;
    b = 0;
    f = 0;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>x>>y>>n;
        if(a==b && x>y)swap(x,y);

        p = a;
        q = b;
        r = x;
        z = y;
        h = n;
            c = a-x;
            if(n>=c){
                a = x;
                n = n-c;
                d = b-y;
                if(n>=d){
                    b = y;
                    m = x*y;
                }
                else{
                    b = b-n;
                    m = a*b;
                }
            }
            else{
                a=a-n;
                m = a*b;
            }
        a = p;
        b = q;
        x = r;
        y = z;
        n= h;
            c = b-y;
            if(n>=c){
                b = y;
                n = n-c;
                d = a-x;
                if(n>=d){
                    l = x*y;
                }
                else{
                    a = a-n;
                    l = a*b;
                }
            }
            else{
                b=b-n;
                l = a*b;
            }

        cout<<min(m,l)<<endl;
    }


}
