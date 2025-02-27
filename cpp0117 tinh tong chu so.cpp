#include <iostream>
using namespace std;
int main(){
int t;	long long n0,n;
cin>>t;
while(t--){
	cin>>n;
	while(n>9){
		n0=0;
		while (n!=0){	
		n0=n0+n%10;
		n=n/10;
		}
		n=n0;
	}
	cout<<n<<endl;
}	
	return 0;
}