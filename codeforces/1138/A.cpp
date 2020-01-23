#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,h,m;
    int f;
    string str;
    vector<int> s,v,one,two;
    map<int,int> ma,sa;
    map<int,int> :: iterator it,ki;
    set<int> se;
    cin>>n;
    c = 0;
    f = 0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int on=0,tw=0;
    for(i=0; i<n; i++)
    {
        f++;
        if(v[i]==1)
        {
            while(v[i]==1)
            {
                on++;
                i++;
                if(i==n)
                {
                    c = 1;
                    break;
                }
            }
            if(f!=1)
            {
                if(on==tw)
                {
                    s.push_back(on);
                    tw = 0;
                }
                else if(tw>on){
                    s.push_back(on);
                    tw = 0;
                }
                else if(on>tw){
                    s.push_back(tw);
                    tw = 0;
                }
                else
                {
                    tw = 0;
                }
            }
            if(c==1)
            {
                break;
            }
            i--;
        }
        else if(v[i]==2)
        {
            while(v[i]==2)
            {
                tw++;
                i++;
                if(i==n)
                {
                    c = 1;
                    break;
                }
            }
            if(f!=1)
            {
                if(tw==on)
                {
                    s.push_back(tw);
                    on = 0;
                }
                else if(on>tw){
                    s.push_back(tw);
                    on = 0;
                }
                else if(tw>on){
                    s.push_back(on);
                    on = 0;
                }
                else
                {
                    on = 0;
                }

            }
            if(c==1)
            {
                break;
            }
            i--;
        }
    }
        sort(s.begin(),s.end());
        cout<<(s[s.size()-1])*2<<endl;
}