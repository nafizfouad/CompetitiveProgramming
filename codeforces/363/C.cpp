#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;
    vector<ll > v,s,vv;
    map<char,ll > mm;
    map<ll,ll > sa,ta,pa,ma;
    map<pair< deque<ll>,deque<ll> >,ll  > me;
    priority_queue<ll > aq,tq,pq;
    string st,et,ft,pt,ct;
    deque<ll> de,pe,ne;
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    cin>>st;
    b   = 0;a = 0;
    	for ( i =0; i<st.size(); i++) {
		if (i!=0 && st[i] == st[i-1]) {
			b++;
		} else {
			a = b;
			b = 1;
		}
		if (a > 1 && b > 1) {
			b = 1;
		} else if ((b >= 3)) {

		} else {
			et.pb(st[i]);
		}
	}
	cout<<et<<endl;
}
