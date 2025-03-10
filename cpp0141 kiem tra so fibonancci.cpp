// https://code.ptit.edu.vn/student/question/CPP0141

#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long f[93]={};
	f[0]=0;f[1]=1;
	for(int i=2; i<=92; i++){
		f[i]=f[i-1]+f[i-2];	
	}
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		int check=0;
		for(int i=0; i<=92; i++)
			if(n==f[i]){
				check=1;
				break;
			}
		if(check==1) cout<< "YES" <<endl;
			else cout<< "NO" <<endl;
	}
	return 0;
}