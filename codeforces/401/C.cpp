#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll i,j,k,a,b,c,d,f,n,t,x,y,e;
    vector<ll> v,s;
      cin>>a>>b;
     if(a>=b){
        if((a-b)>1){
            cout<<-1<<endl;
        }
        else{
         for(j=1;j<=a+b;j++){
            if(j%2==0){
                cout<<1;
            }
            else if(j%2==1){
                cout<<0;
            }
        }
        cout<<endl;
        }
     }
     else{
        if(b>((a*2)+2)){
            cout<<-1<<endl;
        }
        else if(b>=a*2 && b<=((a*2)+2)){
            for(j=1;j<=a+b;j++){
                if(j%3==0){
                    cout<<0;
                }
                else {cout<<1;}
            }
            cout<<endl;
        }
        else{
            d = b%a;
            for(j=1;j<=d;j++){
                for(k=1;k<=3;k++){
                    if(k%3==0){
                        cout<<0;
                    }
                    else cout<<1;
                }
            }
            if(d%2==1){
              for(j=d*3+1;j<=a+b;j++){
                if(j%2==0){
                    cout<<1;
                }
                else cout<<0;
            }
            cout<<endl;
            }
            else{
               for(j=d*3+1;j<=a+b;j++){
                if(j%2==1){
                    cout<<1;
                }
                else cout<<0;
            }
            cout<<endl;
            }

        }
     }


}
