#include <bits/stdc++.h>
using namespace std;
void solve()
{
	long long n;  cin >> n;
	for (int i=2; i<=sqrt(n); i++)
	{
		while(n%i==0)
		{
			n/=i;
		}
		if (n==1) 
		{	
			cout << i << endl;
			break;
		}
	}
	if (n>1) cout<< n <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}