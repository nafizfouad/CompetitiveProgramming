#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll i,j,k,c,d,a,b,e,f,p,q,n,t,m,r,u,x,y;
    vector<ll > vv,v,s;
    string st,et;
    map<ll,ll > pa,ea,ma;
    long double bb,cc,aa;
    cin>>n;
    d =0;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i==2 || i==3)v.push_back(i);
            else
            {
                c  =0;
                for(k=2; k*k<=i; k++)
                {
                    if(i%k==0)
                    {
                        c = i;
                        while(c%k==0)
                        {
                            c = c/k;
                        }
                        if(c!=1)break;
                        else
                        {
                            v.push_back(i);
                            break;
                        }
                    }
                }
                if(c==0 && i!=1)v.push_back(i);
            }
            if(n/i!=i)
            {
                c  =0;
                d = n/i;
                for(k=2; k*k<=d; k++)
                {
                    if(d%k==0)
                    {
                        c = d;
                        while(c%k==0)
                        {
                            c = c/k;
                        }
                        if(c!=1)break;
                        else
                        {
                            v.push_back(d);
                            break;
                        }
                    }
                }
                if(c==0)v.push_back(d);
            }
        }
    }
    sort(v.begin(),v.end());
    d = 0;
    for(i=0; i<v.size(); i++)
    {
        if(n%v[i]==0)
        {
            d++;
           // cout<<n<<" he "<<i<<endl;
            n = n/v[i];
        }
        else
        {
            while(n%v[i]!=0)
            {
                i++;
                if(i==v.size())break;
            }
            if(i!=v.size())
            {
                //cout<<n<<" he "<<i<<endl;
                n = n/v[i];
                d++;
            }
            else
            {
                break;
            }
        }
    }
    cout<<d<<endl;
}
