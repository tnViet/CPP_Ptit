// https://code.ptit.edu.vn/student/question/CPP0222

#include <bits/stdc++.h>
using namespace std;
void solve(){
int n, d=0; cin >> n;
int a[n][n];
for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
		cin >> a[i][j];
		
	for(int k=0; k<n; k++){
		int cnt=1;
		for(int i=1; i<n; i++)
			for(int j=0; j<n; j++){
				if(a[0][k]==a[i][j]){
					cnt++;
					break;
				}
			}	
		if(cnt==n)	d++;
	}	
	cout << d <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}