#include <iostream>
#include <cmath>
using namespace std;
int nt(int a){
	for(int i=2;i<=sqrt(a);i++){
		if (a%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int t;cin>>t;
	while (t--){
		int n;cin>>n;
		for(int i=2;i<=n;i++){
			if (nt(i)==1) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}