#include <iostream>
#include <iomanip>
int main(){
	using namespace std;
	int n;double s=0;
	cin >>n;
	for (int i=1;i<=n;i++){
		s=s+(double)1/i;
		
	};
	cout << setprecision(4)<< fixed <<s;
	
	return 0;
}