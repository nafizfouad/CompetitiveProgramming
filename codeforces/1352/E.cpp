#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f;
    vector<ll > v,s,vv,ss;
    map<ll,string> ma,sa;
    string st,et,ft,pt,ct;
    deque<char> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        for(j=1; j<=a; j++)
        {
            cin>>b;
            v.push_back(b);
        }
        d = 0;
        for(j=0; j<a; j++)
        {
            c = 0;
            f = 0;e = 0;
            for(k=0; k<j; k++)
            {
                c = c+v[k];

                if(c==v[j] && v[k]!=v[j])
                {
                    d++;
                    //cout<<j<<" "<<c<<" "<<v[j]<<" haha "<<k<<endl;
                    f=1;
                    break;
                }
                else if(c>v[j])
                {

                    while(c>v[j] && abs(e-k)>1)
                    {
                        c=c-v[e];
                        e++;
                    }
                    if(c==v[j])
                    {
                        d++;
                      //  cout<<j<<" "<<c<<" "<<v[j]<<" hehe "<<k<<endl;
                        f=1;
                        break;
                    }
                }
            }
            if(f==0)
            {
                c = 0;e = j+1;
                for(k=j+1; k<a; k++)
                {
                    c = c+v[k];

                    if(c==v[j] && v[k]!=v[j])
                    {//cout<<j<<" "<<c<<" "<<v[j]<<" ok "<<k<<endl;
                        d++;
                        break;
                    }
                    else if(c>v[j])
                    {

                        while(c>v[j] && abs(e-k)>1)
                        {
                            c=c-v[e];
                            e++;
                        }
                        if(c==v[j])
                        {
                            d++;
                            //cout<<j<<" "<<c<<" "<<v[j]<<" ki "<<k<<endl;
                            break;
                        }
                    }
                }
            }

        }
        cout<<d<<endl;
        v.clear();
    }


}



