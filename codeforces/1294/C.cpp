#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int i,j,k,a,b,c,n,t,f,m;
    vector<long long int> s;
    map<pair<long long int,long long int>,int > v,se;
    map<long long int,long long int> ma,sa;
    map<pair<long long int,long long int>, int> :: iterator it,ki;
    string st;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        ma.clear();
        s.clear();
        for(j=2;j*j<=a;j++){
            if(a%j==0){
                    s.push_back(j);
               ma[j] = 1;
                if(a/j!=j){
                    s.push_back(a/j);
                    ma[a/j]= 1;
                }
            }
        }
        sort(s.begin(),s.end());
        if(s.size()>=3){
                f = 0;
           for(j=0;j+1<s.size();j++){
            for(k=j+1;k<s.size();k++){
                b = s[j]*s[k];
                c = a/b;
                if(ma[c]==1 && c!=s[j] && c!=s[k]){
                    cout<<"YES"<<endl;
                    cout<<s[j]<<" "<<s[k]<<" "<<c<<endl;
                    f = 1;break;
                }
            }
            if(f==1){
                break;
            }
           }
           if(f==0){
            cout<<"NO"<<endl;
           }
        }
        else cout<<"NO"<<endl;
    }

}
