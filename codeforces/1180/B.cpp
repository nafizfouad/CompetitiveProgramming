#include<iostream>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define int long long
using namespace std;

int a[100007];

int change(int x) {
    return (-x) -1;
}

int32_t main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, p = 1, f = 0; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++) {
        if(abs(a[i]) < abs(change(a[i]))) a[i] = change(a[i]);
        if(a[i] < 0) p *= -1;
    }

    if(p == 1) {
        for(int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }
    } else {
        int minx = 0, idx = 1;
        for(int i = 1; i <= n; i++) {
            int ax = abs(a[i]), bx = abs(change(a[i]));
            if(bx > minx && bx != 0) {
                minx = bx;
                idx = i;
            }
        }
        a[idx] = change(a[idx]);
        for(int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }

    }
}