;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;

#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
#define pf push_front
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

ll i,j,a,k,b,c,n,t=1,m,p,q,d,e,f,y,g,z,h,r,l,x,u,o;
ld aa,bb,ee,dd,ff,kk,gg,cc;
vector<ll> v,s,vv,hh;
vector<pair<ll,ll> > ss,pp;
map<char,ll > ta,pa,sa,ma;
map<char, set<ll> >se,me;
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
    while(t--)
    {
        cin>>n;
        cin>>st;
        cin>>et;
        ss.clear();
        pp.clear();
        me.clear();
        se.clear();
        pa.clear();
        for(i=0;i<n;i++){
                pa[st[i]]++;
        pa[et[i]]++;

            if(st[i]!=et[i]){
                me[st[i]].insert(i);
                se[et[i]].insert(i);
               ss.pb({i,i});
            }

        }
        f = 0;
        for(auto it = pa.begin();it!=pa.end();it++){
            if((*it).second%2!=0){f=1;break;}
        }
        if(f==1){cout<<"NO"<<endl;continue;}
        d = 0;
        for(i=0;i<ss.size();i++){
            char ch,bh;
            ch = st[ss[i].first];
            bh = et[ss[i].second];
            a = ss[i].first;
            b = ss[i].second;
            if(ch!=bh){
                    d++;
                if(me[ch].size()==1 && se[bh].size()==1){

                    pp.pb({a,b});
                    swap(st[a],et[b]);

                    me[ch].clear();
                    se[bh].clear();

                    me[bh].insert(b);
                    se[ch].insert(a);

                    ss.pb({b,a});
                }
                else if(me[ch].size()==1){
                    auto it = se[bh].begin();
                    if((*it)==b)++it;

                    pp.pb({a,(*it)});
                    swap(st[a],et[(*it)]);

                    me[ch].clear();

                    se[bh].erase((*it));
                    se[bh].erase(b);

                    if(st[(*it)]!=et[(*it)])ss.pb({(*it),(*it)}),me[st[(*it)]].insert(*it),se[et[(*it)]].insert(*it);
                }
                 else if(se[bh].size()==1){
                    auto it = me[ch].begin();
                    if((*it)==a)++it;

                    pp.pb({(*it),b});
                    swap(st[(*it)],et[b]);

                    se[bh].clear();

                    me[ch].erase((*it));
                    me[ch].erase(a);

                    if(st[(*it)]!=et[(*it)])ss.pb({(*it),(*it)}),me[st[(*it)]].insert(*it),se[et[(*it)]].insert(*it);
                 }
                 else {

                    auto it = se[bh].begin();
                    if((*it)==b)++it;

                    pp.pb({a,(*it)});
                    swap(st[a],et[(*it)]);

                    me[ch].erase(a);

                    se[bh].erase((*it));
                    se[bh].erase(b);

                    if(st[(*it)]!=et[(*it)])ss.pb({(*it),(*it)}),me[st[(*it)]].insert(*it),se[et[(*it)]].insert(*it);
                 }
            }
        }
        cout<<"YES"<<endl;
        cout<<d<<endl;
        for(i=0;i<pp.size();i++){
            cout<<pp[i].first+1<<" "<<pp[i].second+1<<endl;
        }

    }

}

;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
;;    ;; ;;       ;;    ;; ;;
;;;;;;;; ;;;;;    ;;;;;;;; ;;;;;
;;    ;; ;;       ;;    ;; ;;
;;    ;; ;;;;;;;; ;;    ;; ;;;;;;;;
