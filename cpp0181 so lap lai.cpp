// in ra ucln( q, p ) lan n ;

#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, p , q;
	cin >> n >> p >>  q;
	for(int i=0; i<__gcd(q,p); i++)
		cout<<n;
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--)
		solve();
	return 0;
}