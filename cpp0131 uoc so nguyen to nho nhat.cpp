// https://code.ptit.edu.vn/student/question/CPP0131

#include <bits/stdc++.h>
using namespace std;
int prime(int n){
	if(n==1) return 1;
	if (n%2==0) return 2;
	for(int i=3; i<=sqrt(n); i++)
		if(n%i==0) return i;
	return n;
}
void solve(int n)
{
	for(int i=1; i<=n; i++)
		cout << prime(i) <<" ";
	cout << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >>n;
		solve(n);
		
	}
	return 0;
}