#include<iostream>
using namespace std;
class hocsinh{
    private:
    int maso; 
    float diem[50];
    int somonhoc;
    float dtb; 
    public: 
    char hoten[50];    
};
hocsinh::hocsinh() {
  // Khởi tạo các giá trị mặc định cho các thành viên dữ liệu của lớp
  maso = 0;
  somonhoc = 0;
  dtb = 0;
  for (int i = 0; i < 50; i++) {
    diem[i] = 0;
  }
  strcpy(hoten, "");
}
hocsinh::hocsinh(int somonhoc) {
  // Khởi tạo các giá trị mặc định cho các thành viên dữ liệu của lớp
  maso = 0;
  this->somonhoc = somonhoc;
  dtb = 0;
  for (int i = 0; i < 50; i++) {
    diem[i] = 0;
  }
  strcpy(hoten, "");
}
float hocsinh::tinhDiemTrungBinh() {                                                        
  float tongdiem = 0;
  for (int i = 0; i < somonhoc; i++) {
    tongdiem += diem[i];
  }
  dtb = tongdiem / somonhoc;
  return dtb;
}
void hocsinh::nhap() {
  cout << "Nhap ho ten: ";
  cin >> hoten;
  cout << "Nhap ma so: ";
  cin >> maso;
  cout << "Nhap so mon hoc: ";
  cin >> somonhoc;
  cout << "Nhap diem cac mon hoc: ";
  for (int i = 0; i < somonhoc; i++) {
    cin >> diem[i];
  }
}
void hocsinh::xuat() {
  cout << "Ho ten: " << hoten << endl;
  cout << "Ma so: " << maso << endl;
  cout << "So mon hoc: " << somonhoc << endl;
  cout << "Diem cac mon hoc: ";
  for (int i = 0; i < somonhoc; i++) {
    cout << diem[i] << " ";
  }s
  cout << endl;
  cout << "Diem trung binh: " << dtb << endl;
}
int main() {
    hocsinh s;
    s.hocsinh::xuat();
    system("pause");
    return 0;
}
