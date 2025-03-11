#include <iostream>
using namespace std;
int main(){
	int t,n;
	long long  a[92];
	cin >>t;
	a[1]=a[2]=1;a[0]=0;
	for (int i=3;i<=92;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(t--){
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}