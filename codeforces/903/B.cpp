#include<bits/stdc++.h>
using namespace std;
int main()
{
	double v1,v2,v3;
	cin>>v1>>v2>>v3;
	double m1,m2;
	cin>>m1>>m2;
  int c1=0,c2=0;
    while(ceil(v1/m2)<ceil(m1/v2))
    {
      v1=v1+v3;
      c1++;
      v1=v1-m2;
      
	}
	while(m1>0)
	{
		c2++;
		m1=m1-v2;
	}
	cout<<c1+c2<<"\n";
	while(c1--)
	cout<<"HEAL\n";
	while(c2--)
	cout<<"STRIKE\n";
	
return 0;
}