#include <iostream>
#include <cstdlib>
using namespace std;
int t,n1,n2,kt;long long n;
int main(){
	cin >>t;
	while (t--){
		cin>>n;kt=1;
		while (n>9){
			n1=n%10;
			n=n/10;
			n2=n%10;
			if (abs(n1-n2)!=1) {
				kt=0;
				break;
			}	
		};
		if (kt==1) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	
	}
	return 0;
}