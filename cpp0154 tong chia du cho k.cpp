#include <iostream>
using namespace std;
int main(){
	int t; long long n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		if (k==(k-1)*k/2*(n/k)+(n%k)*(n%k+1)/2) cout<<"1"<<endl; else cout<<"0"<<endl;
	}
	return 0;
}