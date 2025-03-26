// https://code.ptit.edu.vn/student/question/CPP0242

#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	int a[n+1]={}, b[n+1]={};
	bool check=1;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		a[i]+=a[i-1];
	}	
	for(int i=1; i<=n; i++){
		cin >> b[i];
		b[i]+=b[i-1];
	}

	int d=n;
	while(	d>0 && check==1){
		for(int i=1;i<=n-d+1; i++)
			if( (a[i+d-1]-a[i-1]) == (b[i+d-1]-b[i-1])){
				cnt=max(cnt,d);
				check=0;
			}
		d--;
	}
	cout << cnt <<endl;
}
int main(){
	int t; cin >> t;
	while(t--)
		solve();
	
	return 0;
}