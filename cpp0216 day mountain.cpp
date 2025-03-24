// https://code.ptit.edu.vn/student/question/CPP0216

#include <bits/stdc++.h>
using namespace std;
bool check(int l, int r,int a[]){
	int ll=l, rr=r;
	for(int i=l; i<=r; i++){
		if(a[i]<=a[i+1])	ll++;
		else break;
	}
	for(int i=r; i>=l; i--){
		if(a[i]<=a[i-1])		rr--;
		else break;
	}
	if(ll >= rr) 	return 1;
	return 0;
}
void solve(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int l, r; cin >> l >> r;
	if(check(l,r,a)) cout << "Yes\n";
	else cout << "No\n";
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}