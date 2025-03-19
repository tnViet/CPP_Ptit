// https://code.ptit.edu.vn/student/question/CPP0212


#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	int a[n];
	long long sum=0;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++){
		sum=sum*x + a[i];
		sum%= 1000000007;
	}
	cout << sum <<endl;
	
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
	
}