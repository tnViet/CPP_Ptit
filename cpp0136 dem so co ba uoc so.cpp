// https://code.ptit.edu.vn/student/question/CPP0136

#include <bits/stdc++.h>
using namespace std;
bool prime(long n){
	if(n<2) return 0;
	if(n==2) return 1;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}
void solve(long n){
	int cnt=0;
	for(int i=2; i<=sqrt(n); i++)
		if(prime(i)) cnt++;
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--)
	{
		long n; cin >> n;
		solve(n);
	}
	return 0;
}