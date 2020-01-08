#include<iostream>
    #include<stdlib.h>
    #include<math.h>
    #include<ctype.h>
    using namespace std;
    int main(){
     
    int b[200000],c[200000];
    int i,k,t,j,m,s,a[200000];
    double p,q;
    cin>>t;
    for(i=0;i<t;i++){
    cin>>a[i];
    }
     m=0;
     for(i=0;i<t;i++){
    if(a[i]%2==0){
            b[i] = a[i]/2;
        }
    else {
          b[i] = -999999;
          
          if(a[i]>=0) {  
          p = ceil(a[i]/2.0);
          c[m] = p;m++;
          }
          else{
          p = floor(a[i]/2.0);
          c[m] = p;
          m++;}
        }        
    }
     j= m-1;
       s = 0;
    for(i=0;i<t;i++){
    if(b[i]!=-999999){
            s = s+b[i];
        }
    else {s= s + c[m-1];m--;}
    }
     if(s!=0){
     while(s!=0){
        if(c[j]<0){c[j] = c[j] +1;s=s+1;}
        else {
        c[j] = c[j]-1;s=s-1;}
         j--;
       
    }}
        k=0;
     for(i=0;i<t;i++){
     if(b[i]!=-999999){cout<<b[i]<<endl;}
     
    else {cout<<c[k]<<endl;k++;}}
        return 0;
    }
