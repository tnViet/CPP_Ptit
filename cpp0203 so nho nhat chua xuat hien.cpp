// https://code.ptit.edu.vn/student/question/CPP0203

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >>n;
	int a[n];int check=n+1;
	map <int,int > m;
	for(int i=0; i<n; i++) {
		cin >>a[i];
		if(a[i]>0)
			m[a[i]]=1;
	}
	for(int i=1;i<=n;i++)
		if (m[i]==0) {
			check=i;
			break;
		}
	cout<<check<<endl;
}
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}