#include <iostream>
using namespace std;
int main(){
short n; long long t=0,t1=1;
cin >> n;
for (int i=1;i<=n;i++){
	t1=t1*i;
	t=t+t1;
};
cout <<t;
	return 0;
}