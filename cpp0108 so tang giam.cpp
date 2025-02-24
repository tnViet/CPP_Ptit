#include <bits/stdc++.h>
using namespace std;

bool prime(long n){
	if(n==2) return 1;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
bool ascending(long n){
	int d=10;
	int q;
	while(n>0){
		q=n%10;
		n/=10;
		if(q>=d) return 0;
			else d=q;
	}
	return 1;
}

bool descending(long n){
	int d=-1;
	int q;
	while(n>0){
		q=n%10;
		n/=10;
		if(q<=d) return 0;
			else d=q;
	}
	return 1;
}

void solve()
{
	int n,cnt=0; cin >>n;
	long l=pow(10,n-1);
	long r=pow(10,n);
	for(long i=l+1; i<r; i+=2){
		if(ascending(i) || descending(i))
			if(prime(i)) cnt++;
	}
	cout << cnt <<endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}