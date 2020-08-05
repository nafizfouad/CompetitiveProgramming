#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;

    vector<ll > v,s;
    map<ll,ll > sa;

    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        c = 0;
        d = 0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        c = 0;
        for(i=0; i+1<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                c = v[i]+v[j];
                d = 1;
                for(k=0,l=n-1; k<l;)
                {

                    if(k==i || k==j)
                    {
                        k++;
                        continue;
                    }
                    else if(l==j || l==i)
                    {
                        l--;
                        continue;
                    }
                    e = v[k]+v[l];

                    if(c==e)
                    {

                        //cout<<k<<" "<<l<<" "<<c<<" "<<i<<" "<<j<<endl;
                        d++;
                        k++;
                        l--;
                    }
                    else if(c>e)k++;
                    else if(c<e)
                    {
                        l--;

                    }

                }
                s.pb(d);
            }
        }
        if(s.size()==0)s.pb(0);
        sort(s.begin(),s.end());
        cout<<s[s.size()-1]<<endl;
        s.clear();
    }
}
