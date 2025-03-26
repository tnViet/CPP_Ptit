#include <iostream>
using namespace std;
int main(){
	int n,count=0;cin>>n;
	short a[3];
	while(n--){
		int count0=0,count1=0;
		for(int i=0;i<3;i++)
			cin>>a[i];
	for(int i=0;i<3;i++){
		if(a[i]==1) count1++;
			else count0++;
	}
	if(count1>count0) count++;
	}
	cout<<count;
	return 0;
}