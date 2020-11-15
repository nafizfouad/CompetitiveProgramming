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
    vector<pair<ll,ll> > v,s;
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
        l = m/2;
        if(m%2!=0)l++;
        v.clear();
        f = -1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a>=l && a<=m)
            {
                f=i;
            }
            else if(a>m)continue;
            else v.pb({a,i});
        }
        if(f!=-1)cout<<1<<endl<<f+1<<endl;
        else if(v.size()==0)cout<<-1<<endl;
        else
        {
            sort(v.begin(),v.end());
            c =0;
            for(i=v.size()-1;i>=0;i--){
                c +=v[i].first;
                if(c>=l&&c<=m){j=i;break;}
            }
            if(c<l)cout<<-1<<endl;
            else{
                cout<<v.size()-j<<endl;
                for(k=j;k<v.size();k++){
                    cout<<v[k].second+1<<" ";
                }
                cout<<endl;
            }
        }

    }
}
