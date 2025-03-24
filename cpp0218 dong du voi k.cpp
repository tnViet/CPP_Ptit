// https://code.ptit.edu.vn/student/question/CPP0218
/*
	b : max,  a: min
	b = a + d
	ta có: b % k == a % k
	=> ( a + d) % k == a % k
	=> a % k + d % k == a % k
	=> d % k ==0
*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{	
	int n; cin >> n;
	int a[n];int cnt=0;
	for(int i=0; i<n ; i++)
		cin >> a[i];
	sort(a,a+n);
	int d=a[n-1]-a[0];
	vector <int> v;
	for(int i=1; i<=sqrt(d); i++)
		if(d%i==0)	{
		v.push_back(i);
		if(i*i!=d)
			v.push_back( d/ i);
		}
	
	for(int i=0;i<v.size(); i++){
		bool check=1;
		for(int j=0; j<n-1; j++)
			if((a[j]%v[i]) != (a[j+1]%v[i])){
				check=0;
				break;
			}
		if(check) cnt++;
	}
	cout<< cnt <<endl;
}

int main()
{
	int t; cin >>t;
	while(t--)
		solve();
	return 0;
}