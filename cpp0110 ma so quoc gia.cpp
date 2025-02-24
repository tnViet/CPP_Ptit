#include <iostream>
#include <string>
using namespace std;
int main(){
	short t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		int x=s.find("084");
		s.erase(x,3);
		cout<<s<<endl;
	}
	return 0;
}