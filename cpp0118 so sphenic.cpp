#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	map<int,int > m;
	map<int,int >::iterator it;
	int i=2;
	while(n>1){
		if(n%i==0)
			while(n%i==0)
			{
				m[i]++;
				n/=i;
			}
		else i++;
	}
	if(m.size()!=3) 
	{
		cout << 0 <<endl;
		return;	
	}
		else {
			for(it=m.begin(); it!=m.end(); it++)
				if((*it).second >1) 
				{
					cout << 0 <<endl;
					return;
				}
		}
	cout << 1 <<endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}