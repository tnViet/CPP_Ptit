#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int t;
	double a1,a2,b1,b2;
	cin>>t;
	while (t--){
	cin>>a1>>a2>>b1>>b2;
	cout<<setprecision(4)<<fixed<<(double)sqrt(pow(a1-b1,2)+pow(a2-b2,2))<<endl;
};
	return 0;
}