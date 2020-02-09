#include<iostream>

#include<vector>

#include<algorithm>

#define ll long long int

using namespace std;
int main()
{
    ll k,l,cc,bb,ee,p;

    vector<ll> tor;

    cin>>bb;

    for(k=1; k<=bb; k++)
    {
        cin>>ee;

        for(l=1;l<=ee*2;l++){

            cin>>cc;

            tor.push_back(cc);
        }

        sort(tor.begin(),tor.end());

        p = tor[ee]-tor[ee-1];

        p = abs(p);

        cout<<p<<endl;

        tor.clear();
    }
}
