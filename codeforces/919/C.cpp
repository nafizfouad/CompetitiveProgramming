#include<bits/stdc++.h>
#define ll unsigned long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc,dd,ee,ff,kk,gg;
    vector<string > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);

    cin>>n>>m>>k;

    c = 0;
    d = 0;
    for(j=0; j<n; j++)
    {
        cin>>st;
        v.pb(st);
    }
    c = 0;
    d = 0;
    for(j=0;j<n; j++)
    {
        for(i=0;i+1<m;i++){
            if(v[j][i]==v[j][i+1] && v[j][i]=='.'){c = 0;
                while(v[j][i]==v[j][i+1] && v[j][i]=='.'){
                    i++;
                    c++;
                    if(i==m-1)break;
                }
                c++;
                if(c>=k){
                    d= d+(c-(k-1));
                }
            }
        }
    }
    
      for(j=0;j<m; j++)
    {
        for(i=0;i+1<n;i++){
            if(v[i][j]==v[i+1][j] && v[i][j]=='.'){c = 0;
                while(v[i][j]==v[i+1][j] && v[i][j]=='.'){
                    i++;
                    c++;
                    if(i==n-1)break;
                }
                c++;
                if(c>=k){
                    d= d+(c-(k-1));
                }
            }
        }
    }
    if(k==1){
            d =0;
        for(j=0;j<m; j++)
    {
        for(i=0;i<n;i++){
            if(v[i][j]=='.'){d++;}
        }
    }
    }
    cout<<d<<endl;
}

