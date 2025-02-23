#include <iostream>
using namespace std;
int main(){
long long n0,n,m;int t,n1;
cin >> t;
while (t--){
	cin >> n;n0=n;m=0;
	while (n0!=0){
		n1=n0%10;
		n0=n0/10;
		m=m*10+n1;
	};

	if (m==n)
		cout <<"YES"<<endl;
		else cout<< "NO"<<endl;
	
}
return 0;}