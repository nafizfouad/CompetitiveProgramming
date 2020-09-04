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
    for(i=1; i<=t; i++)
    {
        cin>>n>>x;
        b = n;
        c = 0;
        while(b)
        {
            c = c+(b%10);
            v.pb(b%10);
            b=b/10;
        }
        if(c<=x)
        {
            cout<<0<<endl;
        }
        else
        {
            m = 1;
            h = 0;
            p =0;
            for(j=0; j+1<v.size(); j++)
            {
                if(v[j]==0)m=m*10;
                else
                {
                    d = 10-v[j];
                    c = c-v[j];
                    v[j]=0;
                    h = h+(d*m);
                    v[j+1]++;
                    m = m*10;
                    if(v[j+1]==10)
                    {
                        while(v[j+1]==10)
                        {
                            v[j+1]=0;
                            c = c-9;
                            m= m*10;
                            j++;
                            if(j==v.size()-1){p = 1;break;}
                            v[j+1]++;
                        }
                        c++;
                    }
                    else c++;
                    if(c<=x)break;
                }
            }
            if(p==1)c = 1;
            if(c>x){
                d = v.size();
                m = 1;
                for(j=1;j<=d;j++){
                    m = m*10;
                }
                g = m/10;
                g = g*v[v.size()-1];
                y = m-g;
                h = h+y;
            }
            cout<<h<<endl;
        }
        v.clear();
    }

}
