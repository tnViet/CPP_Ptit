#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, p;	cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p]={};
	for (int i=0; i<n; i++)
		for(int j=0; j<m; j++)	cin >> a[i][j];
	for(int i=0; i<m; i++)
		for(int j=0; j<p; j++)	cin >> b[i][j];
		
	for(int i=0; i<n; i++)
		for(int j=0; j<p; j++)
		{
			for(int i1=0; i1<m; i1++)
			c[i][j]+=(a[i][i1]*b[i1][j]);
		}
		
		
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}