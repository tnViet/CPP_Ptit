#include <bits/stdc++.h>
using namespace std;
void solve(){
	long n, cnt=0; cin >> n;
	if(n%2!=0) 
	{
		cout <<0 <<endl;
		return;
	}
	else{
		for(int i=1; i<=sqrt(n);i++)
		 	if(n%i==0){			 
		 		if(i%2==0) cnt++;
		 		if((n/i)%2==0 && i!=sqrt(n)) cnt++;
			}
	}
	cout << cnt <<endl;
}
int main(){
	int t;cin >> t;
	while(t--)
		solve();
	return 0;
}