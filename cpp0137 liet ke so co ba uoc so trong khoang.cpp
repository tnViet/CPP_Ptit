// https://code.ptit.edu.vn/student/question/CPP0137

#include <bits/stdc++.h>
using namespace std;
bool prime(long n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}
void solve()
{
	long long l, r; cin >> l >>r;
	int cnt=0;
	for(int i=ceil(sqrt(l)); i<=floor(sqrt(r)); i++)
		if(prime(i)) cnt++;
	cout<<cnt <<endl;
}
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}