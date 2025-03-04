#include <iostream>
#include <cmath>
using namespace std;

int nt(long long a){
	for(int i=2;i<=sqrt(a)+1;i++){
		if (a%i==0) {
		return 0;break;} 
	
	}	
	return 1;
}

int main(){	
	long long n;
	cin>>n;
	if (n==2) cout<<"YES"; else{
	if ((n==1)||(n==0)) cout<<"NO"; else {if (nt(n)==1) {
	cout<<"YES";} else {
	cout<<"NO";}
	}
}
	return 0;
}