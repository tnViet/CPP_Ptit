#include <iostream>
#include <cmath>
using namespace std;
int a1,a,b,t;
int nt(int a){
	if ((a==1)||(a==0)) return 0;
	if (a==2) return 1;
	for (int i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
};
int main(){
	cin>>t;
	while (t--){
 	cin>>a>>b;  
 	
	for (int j=a;j<=b;j++){
		if (nt(j)==1) cout<<j<<" ";
	}
	cout<<endl;
}
	return 0;
}