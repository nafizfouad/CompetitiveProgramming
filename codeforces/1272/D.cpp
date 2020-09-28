#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x,o;
   
    vector<ll > v,s;
    vector<ll >ss;
    
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        if(i>0)
        {
            if(v[i-1]>=v[i])
            {
                ss.pb(i-1);
                ss.pb(i);
            }
        }
    }
    c = 0;
    for(i=0; i+1<n; i++)
    {
        if(v[i]<v[i+1])c++;
        else
        {
            s.pb(c+1);
            c=0;
        }
    }
    
    
    if(v[n-1]>v[n-2])c++;
    
    s.pb(c);
    
    sort(s.begin(),s.end(),greater<ll>());
    
    for(i=0; i<ss.size(); i++)
    {
        if(ss[i]>0 && ss[i]<n-1)
        {
            if(v[ss[i]-1]<v[ss[i]+1])
            {
                c = 1;
                for(j=ss[i]-1; j>0; j--)
                {
                    if(v[j]>v[j-1]){c++;}
                    else break;
                }
                c++;
                for(j=ss[i]+1; j+1<n; j++)
                {
                    if(v[j]<v[j+1]){c++;}
                    else break;
                }
                s.pb(c);
            }
        }
    }
    sort(s.begin(),s.end(),greater<ll>());
    if(s[0]==0)s[0]=1;
    cout<<s[0]<<endl;
}
