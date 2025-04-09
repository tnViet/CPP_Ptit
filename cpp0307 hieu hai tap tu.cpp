// https://code.ptit.edu.vn/student/question/CPP0307

#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s1, s2;
	map<string, int> m1, m2;
	getline(cin,s1);
	getline(cin,s2);
	stringstream ss1(s1), ss2(s2);
	string tmp;
	while( ss2 >> tmp){
		m2[tmp]++;
	}
	while( ss1 >> tmp){
		m1[tmp]++;
	}
	for(auto x:m1){
		if(m2[x.first]==0)	cout<< x.first <<" ";
	}
	cout << endl;
}

int main()
{
	int n; cin >>n;
	scanf("\n");
	while(n--)
		solve();
	return 0;
}