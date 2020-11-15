#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,cc,rr,kk,gg;
    vector<ll > v,s;
    vector<string > ss,pp;
    map<string,ll > mm;
    map<pair<ll, char>,ll>  sa,ta,ma,pa;
    string st,et,ft;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll ar[15][15];
        e = 0;
        f = 100000;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ar[i][j];
                e = e+abs(ar[i][j]);
                f = min(f,abs(ar[i][j]));
            }
        }
        d = 0;
        for(i=0;i<n;i++){
                c = 0;
            for(j=0;j<m;j++){
                if(ar[i][j]<=0)c++;
            }
            if(c%2!=0)d++;
        }
        if(d%2==1)e=e-(f*2);
        cout<<e<<endl;
    }
}
