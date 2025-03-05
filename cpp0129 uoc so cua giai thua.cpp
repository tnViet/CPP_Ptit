#include <bits/stdc++.h>
using namespace std;
void testcase(int n,int p)
{
	int cnt=0;
	if(n<p) 
	{
		cout << 0 <<endl;
		return;	
	}
	else 
	{
		for(int i=1; i<=(n/p); i++){
			if(p*i<=n) 
			{
				cnt++;
				if(i%p==0) 
				{
					int i1=i;
					while(i1%p==0) 
					{
						cnt++;
						i1/=p;
					}
				}
			}
		}
		cout << cnt <<endl;
	}
	return;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, p; cin >> n >> p;
		testcase(n, p);
	}
	return 0;
}
/*
2 4 6 8 10 12 14 16 8
*/