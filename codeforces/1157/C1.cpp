#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;
int main()
{
    ll i,j,k,a,b,c,n,t,m,p,q,d,e,f,x,y,g,z,h;
    ld aa,bb,cc;
    vector<ll > v,s,vv;
    map<ll,string> sa,ta,ma;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct,ss;
    deque<ll> de;
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.pb(a);
    }
    pq.push(0);
    i=0;
    j = n-1;
    f =  0;
    while(i<j){
        a = v[i]-pq.top();
        b = v[j]-pq.top();
//        cout<<a<<" "<<b<<endl;
//        cout<<v[i]<<" "<<v[j]<<" "<<pq.top()<<endl;
        if(a<=0 && b<=0)break;
       else if(a<b && a>0){
            et.pb('L');
            pq.push(v[i]);
            i++;
        }
        else if(a<b && a<0 && b>0){
            et.pb('R');
            pq.push(v[j]);
            j--;
        }
       else if(a>b && b>0){et.pb('R');pq.push(v[j]);j--;}
       else if(a>b && b<0 && a>0){et.pb('L');pq.push(v[i]);i++;}
        else{
                d = 0;
            for(k=i;k+1<n;k++){
                if(v[k]<v[k+1])d++;
                else break;
            }d++;
               e = 0;
            for(k=j;k>=1;k--){
                if(v[k]<v[k-1])e++;
                else break;
            }
            e++;
            if(d<e){
                for(k=1;k<=e;k++)et.pb('R');
            }
           else if(d>=e){
                for(k=1;k<=e;k++)et.pb('L');
            }f = 1;
            break;

        }
    }
    if(pq.top()<v[i] && f==0){et.pb('L');}
    else if(pq.top()<v[j] &&f==0){et.pb('R');}
    cout<<et.size()<<endl;
    cout<<et<<endl;
}

