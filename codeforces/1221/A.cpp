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

    long long int i,j,k,a,b,c,n,t,f,d,p,bp,cc,bf,ch,sum;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector <long long int> vv,ss;
    map<long long int,long long int> :: iterator it,ki;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;

        f = 0;
        sum = 0;
        for(j=0; j<a; j++)
        {
            cin>>b;
            ma[b]++;
        }
        if(ma[1]==0){
            ma[1] = 0;
        }
        if(ma[2]==0)
        {
            ma[2] = 0;
        }
        if(ma[4]==0)
        {
            ma[4] = 0;
        }
        if(ma[8]==0)
        {
            ma[8] = 0;
        }
        if(ma[16]==0)
        {
            ma[16] = 0;
        }
        if(ma[32]==0)
        {
            ma[32] = 0;
        }
        if(ma[64]==0)
        {
            ma[64] = 0;
        }
        if(ma[128]==0)
        {
            ma[128] = 0;
        }
        if(ma[256]==0)
        {
            ma[256] = 0;
        }
        if(ma[512]==0)
        {
            ma[512] = 0;
        }
        if(ma[1024]==0)
        {
            ma[1024] = 0;
        }
        if(ma[2048]==0)
        {
            ma[2048] = 0;
        }
        b = 2;
        for(it = ma.begin(); it!=ma.end(); it++)
        {
            c = ((*it).second)/2;
            ma[b] = ma[b]+c;
            b = b*2;
        }
        if(ma[1]>=2048){
            cout<<"YES"<<endl;
        }
        else if(ma[2]>=1024)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[4]>=512)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[8]>=256)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[16]>=128)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[32]>=64)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[64]>=32)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[128]>=16)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[256]>=8)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[512]>=4)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[1024]>=2)
        {
            cout<<"YES"<<endl;
        }
        else if(ma[2048]>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        ma.clear();
    }
    return 0;
}