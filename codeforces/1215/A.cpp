#include<iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<deque>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<ctype.h>
#include<functional>
using namespace std;


int main()
{

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,mod,max,min,a1,a2,k1,k2;
    string s,v;
    vector<long long int> vv,ss;
    map<long long int,long long int> it,ki;
    map<long long int,long long int> :: iterator ma;
    map<long long int,long long int,greater<long long int> > ba,sa;
    map<long long int,long long int,greater<long long int> > :: iterator ka;
    long long int ii;
    ios_base::sync_with_stdio(false);
    cin>>a1>>a2>>k1>>k2>>n;
    a = n;
    max = 0;
    min = 0;
    if(k1<k2){
     b = n/k1;
     if(b<0){b=0;}
     if(b<=a1){
        max = max + b;
        n = n-(k1*b);
     }
     else if(b>a1){
        n = n-(a1*k1);
        max = max + (a1);
     }
     b = n/k2;
     if(b<0){b=0;}
      if(b<=a2){
        max = max + b;
        n = n-(k2*b);
     }
     else if(b>a2){
        n = n-(a2*k2);
        max = max + (a2);
     }
    }
    else if(k2<k1){
     b = n/k2;
     if(b<0){b=0;}
      if(b<=a2){
        max = max + b;
        n = n-(k2*b);
     }
     else if(b>a2){
        n = n-(a2*k2);
        max = max + (a2);
     }
     b = n/k1;
     if(b<0){b=0;}
      if(b<=a1){
        max = max + b;
        n = n-(k1*b);
     }
     else if(b>a1){
        n = n-(a1*k1);
        max = max + (a1);
     }
    }
      else if(k2==k1){
            if(a2>=a1){
     b = n/k2;
     if(b<0){b=0;}
      if(b<=a2){
        max = max + b;
        n = n-(k2*b);
     }
     else if(b>a2){
        n = n-(a2*k2);
        max = max + (a2);
     }
     b = n/k1;
     if(b<0){b=0;}
      if(b<=a1){
        max = max + b;
        n = n-(k1*b);
     }
     else if(b>a1){
        n = n-(a1*k1);
        max = max + (a1);
     }
       }
       else {
        b = n/k1;
     if(b<0){b=0;}
     if(b<=a1){
        max = max + b;
        n = n-(k1*b);
     }
     else if(b>a1){
        n = n-(a1*k1);
        max = max + (a1);
     }
     b = n/k2;
     if(b<0){b=0;}
      if(b<=a2){
        max = max + b;
        n = n-(k2*b);
     }
     else if(b>a2){
        n = n-(a2*k2);
        max = max + (a2);
     }
       }
       }

    n = a;
    d = a1*(k1-1);
    c = a2*(k2-1);
    d = c+d;
    if(d<n){
        n = n - d;
        if(n<=a1){
            min = min +n;
            n = 0;
        }
        else if(n>a1){
            min = min+a1;
            n = n-a1;
        }
        if(n<=a2){
            min = min+n;
            n = 0;
        }
        else if(n>a2){
            min = min+a2;
        }
    }
    else if(d>=n){
        min = 0;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}