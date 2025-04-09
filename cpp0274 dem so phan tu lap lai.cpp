#include <bits/stdc++.h>
using namespace std;
void testcase()
{
	int n; cin >> n;
	int a, cnt=0;
	map <int, int> m;
	for(int i=0; i<n; i++){
		cin >> a;
		m[a]++;
	}
	for(auto x:m)
		if(x.second > 1 ) cnt+=x.second;
	cout <<cnt << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		testcase();
	}
	return 0;
}