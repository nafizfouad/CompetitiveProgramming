

#include<bits/stdc++.h>
#define ll long long int

#define pb push_back

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
vector<ll> v,s,vv;
vector<ll> ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll > me,he,mem;
map<string,ll>se;


int main()
{
    cin>>t;
   
    while(t--)
    {
        
        v.clear();
        cin>>n;
        c = 0;
        for(i=0;i<n+2;i++){
            cin>>a;
            c = c+a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        
        c = c-v[v.size()-1];
        
        f = -1;
        for(i=0;i+1<v.size();i++){
            d = c-v[i];
            if(d==v[v.size()-1]){f=i;break;}
        }
        c = c-v[v.size()-2];
        if(c==v[v.size()-2]){
            for(i=0;i<n;i++)cout<<v[i]<<" ";
            cout<<endl;
        }
        else if(f!=-1){
            for(i=0;i+1<v.size();i++)if(f!=i)cout<<v[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
       
    }
}



