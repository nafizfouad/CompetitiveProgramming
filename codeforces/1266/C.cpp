#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s;
    map<ll, ll > ta,pa,sa,ma;
    map<ll,vector<ll>  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,ne;
    set<ll> li;
    int ar[600][600];
    char ch;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    if(n==1 && m==1)cout<<0<<endl;
    else if(n==1)
    {
        for(i=m+1; i>1; i--)cout<<i<<" ";
        cout<<endl;
    }
    else if(m==1)
    {
        for(i=n+1; i>1; i--)cout<<i<<endl;
    }
    else
    {
        f = 0;
        if(n>m){swap(n,m);f=1;}
        t = 3;
        ar[0][0] = 2;
        c = n*2;
        for(i=1; i<m; i++)
        {
         ar[0][i] = t;
         if(t>c)t++;
         else {t = t+2;}
        }
        t = 2;
        for(i=1;i<n;i++){

            b = 2*t;
            ar[i][0]=b;
            t++;
            for(j=1;j<m;j++){
                ar[i][j]=ar[0][j]*b;
            }
        }
        if(f==0){
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    cout<<ar[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    cout<<ar[j][i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
