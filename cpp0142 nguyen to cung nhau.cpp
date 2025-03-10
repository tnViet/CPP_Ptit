#include <bits/stdc++.h>
using namespace std;
bool snt(int a)
{	
	if (a==2) return true;
	if (a==1) return false;
	for (int i=2; i<=sqrt(a); i++)
		if (a%i==0) return false;
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{	
		int n; cin >> n;
		int count=0;
		for(int i=1; i<=n; i++)
			if (__gcd(n,i)==1) count++;
		if (snt(count)) cout << 1 <<endl;
			else cout << 0 <<endl;
	}
	return 0;
}