#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,h,m;
    int f;
    string str,v;
    vector<int> s;
    map<int,int> ma,sa;
    map<int,int> :: iterator it,ki;
    cin>>n>>h>>m;
    for(i=1; i<=n; i++)
    {
        s.push_back(i);
        ma[i] = 500;
    }
    for(i=1; i<=m; i++)
    {
        cin>>a>>b>>c;
        for(j=a;j<=b;j++){
            if(ma[j]>c){
                ma[j] = c;
            }
        }
    }
    a = 0;
    for(i=0; i<n; i++)
    {
        if(ma[s[i]]==500)
        {
            a = a+(h*h);
        }
        else if(ma[s[i]]!=500)
        {
            if(ma[s[i]]<=h)
            {
                a = a+(ma[s[i]]*ma[s[i]]);
            }
            else
            {
                a = a+(h*h);
            }
        }
    }
    cout<<a<<endl;
}