#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,a,b,c,d,f,r,e,h,l,o;
    string s,v;


    cin>>s;
    c = 0;
    e = 0;
    h = 0;
    l = 0;
    o = 0;
    for(i=0;i<s.size();i++){
        if(s[i]=='h'){
            h = i;
            v.push_back(s[i]);
            break;
        }
    }
    for(i=h+1;i<s.size();i++){
        if(s[i]=='e'){
            e = i;
            v.push_back(s[i]);
            break;
        }
    }
    for(i=e+1;i<s.size();i++){
        if(s[i]=='l'){
            l = i;
            v.push_back(s[i]);
            break;
        }
    }
    for(i=l+1;i<s.size();i++){
        if(s[i]=='l'){
            e = i;
            v.push_back(s[i]);
            break;
        }
    }
    for(i=e+1;i<s.size();i++){
        if(s[i]=='o'){
            v.push_back(s[i]);
            break;
        }
    }
     if(v=="hello"){cout<<"YES"<<endl;}
     else cout<<"NO"<<endl;
     v.clear();
    return 0;
}
