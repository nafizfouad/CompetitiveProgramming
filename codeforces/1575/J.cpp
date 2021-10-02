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
    if(aa<0)
        aa = -aa;
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
        if(p%2==1)
            res = res*b, res = res%mod1;
        b = b*b,b = b%mod1,p = p/2;
    }
    return res;
}
int tc = 0;
#define maxn 100000+5
int arr[1000+5][1000+5];
int ans[1000+5][1000+5];
int n, m, k;

long make(long i, long j)
{
    if(ans[i][j]!=-1)return ans[i][j];
    if(i>n)
    {
        arr[i][j] = j;
        return j;
    }
    int a = arr[i][j];
    arr[i][j] = 2;
    long res = 0;
    if(a==1)
    {
        res = make(i, j+1);

    }
    else if(a==3)
    {
        res = make(i, j-1);
    }
    else
    {
        res = make(i+1, j);
        if(ans[i][j]==-1)
            ans[i][j] = ans[i+1][j];
    }
    if(ans[i][j]==-1)
    {
        if(i+1>n)
            ans[i][j] = j;
        else
            ans[i][j] = ans[i+1][j];
    }
    return res;
}
void solve()
{
    cin >> n >> m >> k;
    memset(ans, -1, sizeof ans);
    for(int i= 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cin >> arr[i][j];
        }

    }
    for(int i= 1; i<=k; i++)
    {
        int a;
        cin >> a;
        cout << make(1, a)<<" ";
    }



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
