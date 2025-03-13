// https://code.ptit.edu.vn/student/question/CPP0204

#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}
void solve()
{
	int l, r, cnt=0; cin >>l >>r;
	for(int i=l; i<=r; i++)
		if(prime(i)) cnt++;
	cout << cnt<<endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}