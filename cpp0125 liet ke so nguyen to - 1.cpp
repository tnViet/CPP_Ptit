#include <iostream>
#include <cmath>
using namespace std;
int a1,a,b;
int nt(int a){
	if ((a==1)||(a==0)) return 0;
	if (a==2) return 1;
	for (int i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
};
int main(){
 	cin>>a>>b;    // bai nay de y a>b
 	if (a>b){
 		a=a+b;
 		b=a-b;
 		a=a-b;
	 }
 
	for (int j=a;j<=b;j++){
		if (nt(j)==1) cout<<" "<<j;
	}
	return 0;
}