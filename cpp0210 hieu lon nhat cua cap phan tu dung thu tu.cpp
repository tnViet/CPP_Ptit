// https://code.ptit.edu.vn/student/question/CPP0210

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int a[n]; int m=-1;
	for(int i=0; i<n; i++) 	cin >>a[i];
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[j] >= a[i])	
				if(m < (a[j]-a[i])) m=a[j]-a[i];
	cout << m <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}