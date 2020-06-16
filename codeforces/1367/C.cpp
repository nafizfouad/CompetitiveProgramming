#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,z;
    vector<ll > v,s,vv;
    vector<ll> aa;
    map<ll,ll> ma,sa,ta;
    map<ll,ll> :: iterator it,ki;
    string st,et,ft,pt,ct;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>st;
        c = 0;
        d = 0;
        f = 0;
        v.clear();
        for(i=0; i<n; i++)
        {
            if(st[i]=='1'){
                v.pb(i);
            }
        }
        if(v.size()==0){
            b = n/(k+1);
            if(n%(k+1)!=0)b++;
            cout<<b<<endl;
        }
        else{
          for(i=0;i+1<v.size();i++){
            b = v[i+1]-v[i];
            b--;
            c = k+1;
            d = b/c;
            if((d*c)+k==b)f = f+d;
            else f = f+d-1;
        }
         if(v[0]!=0){
           b = v[0]-0;
         c = k+1;
         d = b/c;
         f = f+d;
         }

        if(v[v.size()-1]!=n-1){
          b = n-v[v.size()-1];
         b--;
         c = k+1;
         d = b/c;
         f = f+d;
        }
         if(f<0)f=0;
         cout<<f<<endl;
        }

    }

}
