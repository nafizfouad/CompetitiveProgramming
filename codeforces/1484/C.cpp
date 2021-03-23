

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s;
vector<vector<ll> > vv,ss,pp;
map<ll,ll > ta,pa,sa,ma;
map<pair<ll,ll>,ll> me,he,mem;
map<string,ll>se;
priority_queue<ll > aq,tq,pq,nq,mq,xq;
string st,et,ft,pt,ct;
deque<ll> de,ne;
set<ll> li,si;

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

int main()
{
    fast;
    cin>>t;
    p = 0;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>k;
            v.clear();
            for(j=0; j<k; j++)
            {
                cin>>a;
                v.pb(a);
                ma[a]++; ///total konta kotobar ase
            }
            if(v.size()==1)sa[v[0]]++; ///single konta kotobar ase
            vv.pb(v);
        }
        c = m/2;
        if(m%2==1)c++;
        f = 0;
        g = 0;
        for(auto it = ma.begin(); it!=ma.end(); it++)
        {
            a = (*it).first;
            b = (*it).second;
            if(b>c){e = a,f=1;break;} ///half er cheye boro emon ekta nilam
        }
        /// f = 0 mane ektao half er boro nai
        if(f==0)
        {
            cout<<"YES"<<endl;
            for(i=0; i<vv.size(); i++)
            {
                cout<<vv[i][0]<<" ";
            }
            cout<<endl;
        }
        else
        {
            g = 0;
            d = sa[e];

            /// single jodi half er boro thake tahole g=1 mane ans no

            if(d>c)
            {
                g=1;
            }
            else
            {
                x = c-d; /// single bade jei koyta nite parbo
                cout<<"YES"<<endl;
                for(j=0; j<vv.size(); j++)
                {
                    p =0;
                    y = -1;
                    if(vv[j].size()==1 && vv[j][0]==e)
                    {
                        cout<<e<<" "; /// mane single ase eita to must nibo
                        continue;
                    }
                    for(k=0; k<vv[j].size(); k++)
                    {
                        if(vv[j][k]==e && x>0)
                        {
                            p=1; ///single bade jei koyta nitesilam oitar condition, x komaisi ek kore
                            break;
                        }
                        else if(vv[j][k]==e && x<=0)
                        {
                            y = k;
                            ///mane half neya shesh er poreo 'e' paisi,
                            ///kon index e paisi oita mark korlam jate pore oi index bade onno
                            /// ekta print korte pari
                            break;
                        }
                    }
                    if(p==1)cout<<e<<" ",x--;
                    else if(y==-1 || y>0)cout<<vv[j][0]<<" ";
                    else if(y==0)cout<<vv[j][1]<<" ";
                    else cout<<vv[j][0]<<" ";
                }
                cout<<endl;
            }
            if(g==1)cout<<"NO"<<endl;
        }
        vv.clear();
        ma.clear();
        v.clear();
        sa.clear();
    }
}


