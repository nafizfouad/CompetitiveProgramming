#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,d,f,r,e,h,l,o,t,sum,th,fo,on,n,to;
    vector<int> v,s;
    cin>>n;
    sum = 0;
    c = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        sum = sum+a;
        v.push_back(a);
    }
    sum = sum/2;
    sum = sum +1;
    c = 0;
    sort(v.begin(),v.end(),greater<int>());
    s.push_back(v[0]);
    for(i=1; i<v.size(); i++)
    {
        s.push_back(s[i-1]+v[i]);
    }
    f = 0;
    for(i=0;i<s.size();i++){
        if(s[i]<sum){
            c++;
        }
        else if(s[i]==sum){
            f = 1;
            c++;
        }
        else {
            break;
        }
    }
    if(f==0)cout<<c+1<<endl;
    else cout<<c<<endl;
    return 0;
}
