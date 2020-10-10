#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<queue>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
    ld aa,bb,cc,ee,dd,ff,kk,gg;
    vector< ll > v,s,vv;
    map<ll,vector<ll> > me;
    map<ll,ll > sa,ta,pa,ma;
    priority_queue<ll, vector<ll>, greater<ll> > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    char ar[110][110];
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    c = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ar[i][j]=='.'){
                e = 0;
                while(ar[i][j]=='.'){
                    e++;
                    j++;
                    if(j==m)break;
                }
                c = c+(e-1);
            }

        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(ar[j][i]=='.'){
                e = 0;
                while(ar[j][i]=='.'){
                    e++;
                    j++;
                    if(j==n)break;
                }c = c+(e-1);
            }

        }
    }
    cout<<c<<endl;
}
