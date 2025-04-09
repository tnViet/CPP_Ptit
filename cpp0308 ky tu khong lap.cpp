#include <iostream>
#include <cstring>
using namespace std;
int main(){
	short t;cin>>t;
	while(t--){
	char s[100000];
	cin>>s;
	int cnt[255]={0};
	for (int i=0;i<strlen(s);i++){
		cnt[s[i]]++;
	}
	for(int i=0;i<strlen(s);i++){
		if(cnt[s[i]]==1)
			cout<<s[i];
	}
	cout<<endl;
	}
	return 0;
}