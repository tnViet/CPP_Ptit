// https://code.ptit.edu.vn/student/question/CPP0217

#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n, m; cin >> n >> m;
	int a[n*n];
	for(int i=0; i<n*n; i++)
		cin >> a[i];
	stable_sort(a,a+n*n);
	
	cout << a[m-1] <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();	
	return 0;
}