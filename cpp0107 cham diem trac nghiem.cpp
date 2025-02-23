#include <iostream>
#include <iomanip>
using namespace std;
int main(){
char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'},
     b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'},
     c[15];
int made;
int t;cin>>t;
	while(t--){
    cin>>made;double diem=0;
    for(short i=0;i<15;i++)
        cin>>c[i];
        
    if(made==101){
        for (int i=0;i<15;i++)
            if(c[i]==a[i]) diem+=2.0/3;
    }else{
    	for (int i=0;i<15;i++)
        	if(c[i]==b[i]) diem+=2.0/3;
    }
    cout<<setprecision(2)<<fixed<<diem<<endl;
}
    return 0;
}
