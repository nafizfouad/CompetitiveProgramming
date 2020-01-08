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

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum,s;
    //string s,v[10];
    map<char,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;
    cin>>n;
for(i=1;i<=n;i++){
    cin>>p>>bp>>cc;
    cin>>bf>>ch;
    sum = 0;
    if(p%2==1){
        p = p-1;
    }
    if(bf>=ch){
        s = p/2;
        if(s>=bp){
            p = p-(bp*2);
            sum = sum+(bf*bp);
            s = p/2;
            if(s>=cc){
                p = p-(cc*2);
                sum = sum+(ch*cc);
            }
            else{
                p = 0;
                sum = sum+(ch*s);
            }

        }
        else if(s<bp){
            p = 0;
            sum = sum+(bf*s);
        }
        vv.push_back(sum);
    }
    else if(ch>bf){
        s = p/2;
        if(s>=cc){
            p = p-(cc*2);
            sum = sum+(ch*cc);
            s = p/2;
            if(s>=bp){
                p = p-(bf*2);
                sum = sum+(bf*bp);
            }
            else{
                p = 0;
                sum = sum+(bf*s);
            }

        }
        else if(s<cc){
            p = 0;
            sum = sum+(ch*s);
        }
        vv.push_back(sum);
    }
    sort(vv.begin(),vv.end(),greater<int>());
    cout<<vv[0]<<endl;
    vv.clear();}
    return 0;
}
