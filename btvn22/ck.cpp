#include<iostream>
using namespace std;
struct congtyA {
char  hotennhanvien[100];
	int tuoi;
	char vitrilamviec[100];
	float hesoluong;
	
};
void nhap(congtyA &TTNV){
	cout<<" nhap ten nhan vien";
	gets(TTNV.hotennhanvien);
	cout<<"nhap tuoi nhan vien";
	cin>>TTNV.tuoi;
	cout<<" nhap vi tri lam viec";
	gets(TTNV.vitrilamviec);
	cout<<"nhap he so luong";
	cin>>TTNV.hesoluong;
}
void xuat(congtyA &TTNV){
	cout<<"ho va ten: "<<TTNV.hotennhanvien;
	cout<<"tuoi:"<<TTNV.tuoi;
	cout<<"vi tri lam viec:"<<TTNV.vitrilamviec;
	cout<<"he so luong:"<<TTNV.hesoluong;
}
int main()
{
	congtyA TTNV;
	nhap(TTNV);
	xuat(TTNV);
	return(0);
    
}