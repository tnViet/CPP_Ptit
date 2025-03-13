#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string id, name, clas, birth;
	float gpa;	
};
void chuanhoa(SinhVien &a)
{
	if (a.birth[1]=='/') a.birth.insert(0,"0");
	if (a.birth[4]=='/') a.birth.insert(3,"0");
}

void nhapThongTinSV(SinhVien &a)
{	
	a.id="N20DCCN001";
	getline(cin, a.name);
	cin >> a.clas >> a.birth >> a.gpa;
	chuanhoa(a);
}
void inThongTinSV(SinhVien &a)
{
		cout << a.id <<" "<< a.name <<" "<< a.clas <<" "<< a.birth <<" "<< setprecision(2)<<fixed<<a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}