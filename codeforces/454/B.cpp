#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long int
#define pi acos(-1)
int si;

int main() {
	cin>>si;
	int prev = 0;
	int ans = -1;
	int first;
	int last;
	for (int i = 0; i < si; i++) {
		int curr; cin>>curr;
		if (i == 0) first = curr;
		if (i == si-1) last = curr;
		if (curr < prev && ans == -1) ans = si-i;
		else if (curr < prev) ans = -2;
		prev = curr;
	}
	if (ans == -2) cout<<"-1\n";
	if (ans == -1) cout<<"0\n";
	if (ans >= 0 && last > first) cout<<"-1\n";
	if (ans >= 0 && last <= first) cout<<ans<<"\n";
}
