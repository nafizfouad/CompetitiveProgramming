/**So..a**/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FF first.first
#define FS first.second
#define S second
#define SF second.first
#define SS second.second
#define long long long
#define NL_ "\n"
#define __lcm(a, b) (a/__gcd(a, b)*b)
#define PI acos(-1)
#define EXP 10e-9
#define what_is(x) cerr << #x << " is " << x << endl;
template<class a>
a abs(a aa)
{
    if(aa<0) aa = -aa;
    return aa;
}
long mod1 = 1000000000+7;
long mod2 = 1000000000+9;
template<class A, class B>
A POW(A b, B p)
{
    A res = 1;
    while(p)
    {
        if(p%2==1) res = res*b, res = res%mod1;
        b = b*b,b = b%mod1,p = p/2;
    }
    return res;
}
int tc = 0;
#define maxn 100000+5
string s[1000000+2];
int m, n;

void solve()
{

    cin >> n >> m;
    vector<int> v1, v2[27];
    for(int i= 1; i<=n; i++)
    {
        cin >> s[i];
        v1.push_back(i);
    }
    for(int i= m-1; i>=0; i--)
    {
        for(int i= 0; i<26; i++) v2[i].clear();
        for(int j=1; j<=n; j++)
        {
                   int r = v1[j-1];
                   char rr = s[r][i];
                   v2[rr-'A'].push_back(r);

        }
        v1.clear();
        if(i%2==0)
        {
            for(int i=0; i<26; i++)
                for(auto &x : v2[i]) v1.push_back(x);
        }
        else
        {
                for(int i=25; i>=0; i--)
                for(auto &x : v2[i]) v1.push_back(x);
        }

    }
    for(auto x: v1) cout << x<<" ";

}






int main()
{
    fastIO();
    int t = 1;
//     cout << fixed << setprecision(12);
//    cin >> t;
    while(t--)
    {
//        cout <<"Case "<<++tc<<": ";
        solve();
    }


    return 0;

}
