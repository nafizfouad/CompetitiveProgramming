#include<bits/stdc++.h>
using namespace std;
int main(){

long long int a,b,c,d,n,t,f,i,j,k;
deque<long long int> v,s;
string st,ss;
cin>>t;
for(i=1;i<=t;i++){
    cin>>n;
    cin>>st;
    a = 0;
    for(j=0;j<st.size();j++){
        a = a+int(st[j]);
    }
    if(a%2==0 && int(st[st.size()-1])%2!=0){
        cout<<st<<endl;
    }
    else if(a%2==0 && int(st[st.size()-1]%2==0)){
            f = 0;
            if(st.size()>2){
               for(j=st.size()-2;j>=0;j--){
            if(int(st[j])%2!=0){
                f = 1;
               break;
            }
        }
            }
        if(f==1){
          for(k=0;k<=j;k++){
            cout<<st[k];
        }
        cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else if(a%2!=0){
            f = 0;
            if(st.size()>1){
              for(j=st.size()-1;j>=0;j--){
        if(int(st[j])%2!=0){

                f = 1;break;
        }
     }
     if(j==0 && st[j+1]=='0'){f=0;}
    }

     int m = 0;
     if(f==1){
       for(k=j-1;k>=0;k--){
        if(int(st[k])%2!=0){
            m = 1;
            break;
        }
     }
     if(j==k){m=0;}
     if(k==0){m=0;}
     }

     c = 0;
     int p;
     if(f==1 && m==1){
        for(p=0;p<=k;p++){
            if(p!=j){
                    c = 1;
                cout<<st[p];
            }
        }
        cout<<endl;
     }
     else if(c!=1){
        cout<<-1<<endl;
     }
     else {
        cout<<-1<<endl;
     }
    }
}


}
