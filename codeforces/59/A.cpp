#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,j,k,a,b,c,n,t,f,d;
    string s,v;
    map<long long int,long long int> ma,sa;
    vector<long long int> vv,ss;
    map<char,long long int> :: iterator it,ki;

    cin>>s;
    a = 0;
    b = 0;
    c = 0;
    f = 0;
    for(i=0;i<s.size() ;i++)
    {
      if(s[i]>='A' && s[i]<='Z'){
        a++;
      }
      else if(s[i]>='a' && s[i]<='z'){
        b++;
      }
    }
    if(b>=a){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    return 0;
}
