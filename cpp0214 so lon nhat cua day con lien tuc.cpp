// https://code.ptit.edu.vn/student/question/CPP0214

#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n, k; cin >> n>> k;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	multiset<int> s;
	for(int i=0; i<k;i++)
		s.insert(a[i]);
	cout <<	*s.rbegin() <<" ";
		
	for(int i=k; i<n; i++){
		s.erase(s.find(a[i-k]));
		s.insert(a[i]);
	cout <<	*s.rbegin() <<" ";
	}
	cout <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	
	return 0;
}