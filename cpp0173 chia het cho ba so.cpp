#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long  a, b, c, n;
	cin >> a >> b >>c >>n;
	long  bc=a*b/(__gcd(a,b));
	long  bc1=bc*c/(__gcd(c,bc));
	long long p=pow(10,n-1);
	if(p*10-1<bc1) cout << -1 <<endl;
	else
		if(p % bc1 ==0) cout<< p<<endl;
			else cout << (p/bc1+1)*bc1 <<endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}