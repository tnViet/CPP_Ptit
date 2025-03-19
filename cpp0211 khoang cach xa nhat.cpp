// https://code.ptit.edu.vn/student/question/CPP0211

#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++)	cin >> a[i];
	
	int d=n-1;bool check=0;
	while(check==0){
		for(int i=0; i<n-d; i++)
			if(a[i] <= a[i+d] ){
				check=1;
				break;
			}
		d--;
	}
	cout << d+1 <<endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}