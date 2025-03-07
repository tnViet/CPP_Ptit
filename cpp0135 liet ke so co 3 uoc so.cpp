#include <iostream>
#include <cmath>
using namespace std;
int nt(int a){
	if (a==2) return 1;
	for (int i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t,n;
	cin >>t;
	while(t--){
		cin>>n;
		for (int i=2;i<=sqrt(n);i++){
			if (nt(i)==1)
			cout<<i*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}