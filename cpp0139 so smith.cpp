// https://code.ptit.edu.vn/student/question/CPP0139
// không phải ước nguyên tố mà là liệt kê theo tích các cnt rồi tính tổng
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}
int sum(int n){
	int cnt=0;
	while(n!=0){
		cnt+=(n%10);
		n/=10;
	}
	return cnt;
}
void solve()
{
	int n; cin >> n;
	int  i=2,cnt=0;
	if(prime(n)) cout<<"NO" << endl;
	else{
		int sumn=sum(n);
		while(n!=1){
			if(n%i==0)
				while(n%i==0){
					cnt+=sum(i);
					n/=i;
				}
			i++;
		}
		if(sumn==cnt) cout<<"YES" <<endl;
			else cout <<"NO\n";
	}
	
}
int main()
{
	int t; cin >>t;
	while(t--)
	{
		solve();
	}
	return 0;
}