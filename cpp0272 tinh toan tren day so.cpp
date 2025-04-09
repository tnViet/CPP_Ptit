// https://code.ptit.edu.vn/student/question/CPP0272

#include <bits/stdc++.h>
using namespace std;
long long d=1e9+7;
void solve(){
	int n; cin >> n;
	long long a[n];
	long long ans=1, h=1;
	for(int i=0; i<n; i++){
		cin >> a[i];
		h*=a[i];
		h%=d;
	}
	long long g=a[0];
	for(int i=1; i<n; i++)
		g=__gcd(g, a[i]);
	for(int i=0; i<g; i++){
		ans=ans*h;
		ans%=d;
	}	
	cout << ans <<endl;
}

int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}