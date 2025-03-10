// https://code.ptit.edu.vn/student/question/CPP0140
// dung dinh li euclid-euler

#include <bits/stdc++.h>
using namespace std;
vector<long long > v;

bool prime(long long p){
	if(p<2) return 0;
	if(p==2) return 1;
	for(int i=2; i<=sqrt(p); i++)
		if(p%i==0) return 0;
	return 1;
};

void perfect(){
	for(int p=2; p<=33; p++)
	if(prime(p)){
		long long i=pow(2,p)-1;
		if(prime(i))
			v.push_back(pow(2,p-1)*(pow(2,p)-1));
	}
}
int main(){
	int t; cin >> t;
	perfect();
	while(t--)
	{
		long long n; cin >> n;
		int check=0;
		for(int i=0; i<v.size(); i++)
			if(n==v[i]) check=1;
		cout << check << endl;
	}
	return 0;
}