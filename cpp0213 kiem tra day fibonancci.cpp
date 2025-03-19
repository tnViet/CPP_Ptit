// https://code.ptit.edu.vn/student/question/CPP0213

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	long long f[18];
	map <long long,int> m;
	f[0]=0;f[1]=1;
	m[0]=1;m[1]=1;
	for(int i=2; i<18; i++){
		f[i]=f[i-1]+f[i-2];
		m[f[i]]=1;
	}
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++)  
			if (m[a[i]]==1) 
				cout << a[i] <<" ";
		cout <<endl;
	}
	return 0;
}