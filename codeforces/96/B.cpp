#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z;
    ld aa,bb,cc;
    vector<pair<ll,ll> > v,s;
    vector<ll> vv;
    vector<string> vs;
    map<ll,ll> ma;
    map<ll,ll> sa,ta;
    priority_queue<ll> pq;
    priority_queue<ll > aq,tq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>ss;
    f = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    if(ss.size()%2==1)
    {
        b = ss.size()+1;
        b = b/2;
        for(i=1; i<=b; i++)cout<<'4';
        for(i=1; i<=b; i++)cout<<'7';
        cout<<endl;
    }
    else
    {
        a = -1;
        b = -1;
        f = 0;
        for(i=0; i<ss.size(); i++)
        {
            if(ss[i]<'4')
            {
                a=i;
                break;
            }
            else if(ss[i]>'4' && ss[i]<'7')
            {
                b=i;
                break;
            }
           else if(ss[i]>'7')
            {
                f = 1;
                break;
            }
        }
        if(f==1 && i==ss.size()-1){goto pp;}
        else if(f==1 && ss[0]=='4')
        {
            cout<<'7';
            c = ss.size()/2;
            for(i=1; i<=c; i++)cout<<'4';
            for(i=1; i<c; i++)cout<<'7';
            cout<<endl;
        }
        else if(f==1 && ss[0]=='7')
        {
            c = ss.size()/2;
            c++;
            for(i=1; i<=c; i++)cout<<'4';
            for(i=1; i<=c; i++)cout<<'7';
            cout<<endl;
        }
        else if(f==1){
            c = ss.size()/2;
            c++;
            for(i=1; i<=c; i++)cout<<'4';
            for(i=1; i<=c; i++)cout<<'7';
            cout<<endl;
        }
        else
        {
            if(a==-1 && b!=-1){
                ss[b] ='7';
                for(i=b+1;i<ss.size();i++){
                    ss[i] = '4';
                }
            }
            else if(a!=-1 && b==-1){
                ss[a] ='4';
                for(i=a+1;i<ss.size();i++){
                    ss[i] = '4';
                }
            }
            pp:
            stringstream sp;
            sp<<ss;
            sp>>n;
          //  cout<<n<<endl;
            while(1)
            {
                a = 0;
                b = 0;
                m = n;
                d = 0;
                while(m)
                {
                    c = m%10;
                    m = m/10;
                    if(c==4)a++;
                    else if(c==7)b++;
                    else
                    {
                        d=1;
                        break;
                    }
                }
               if(d==1)n++;
                else if(a==b){cout<<n<<endl;break;}
                else if(a==0){
                   c = b/2;
                   c++;
                   for(i=1;i<=c;i++)cout<<4;
                   for(i=1;i<=c;i++)cout<<7;
                   cout<<endl;break;
                }
                else n++;
            }

        }
    }
}

