#include<iostream>
#include<math.h>
#define ll long long int
#define ld long double
#define pi acos(-1)
#define pb push_back
using namespace std;

int main()
{
    ll i,j,a,k,b,c,n,t,m,p,q,d,e,f,y,g,z,h,r,l,x;
    ld aa,bb,ee,dd,ff,kk,gg;

    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

        cin>>n;
        cin>>bb;
        e = 0;
        for(i=0;i<n;i++){
            cin>>a>>b;
            c = (a*a)+(b*b);
          aa = sqrt(c);
            if(aa<=bb)e++;
        }
        cout<<e<<endl;
}
