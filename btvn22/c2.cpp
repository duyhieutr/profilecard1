#include<iostream>

struct HocSinh{
    char ho[50], ten[10];
    float t, l , h, tb;

    void Nhap(){
        std::cout << "Nhap ho: ";
        for(int i = 0; i < 50; i++){ho[i] = '.';}
        std::string _ho; std::getline(std::cin, _ho);
        for(int i = 0; i < _ho.size(); i++){
            ho[i] = _ho[i];
        }
        
        std::cout << "Nhap ten: ";
        for(int i = 0; i < 10; i++){ten[i] = '.';}
        std::string _ten; std::getline(std::cin, _ten);
        for(int i = 0; i < _ten.size(); i++){
            ten[i] = _ten[i];
        }

        std::cout << "Nhap diem toan li hoa: ";
        std::cin >> t >> l >> h;

        //Tinh diem tb.
        tb = (t + l + h) / 3.0;
    }

    void Xuat(){
        //Xuat ho va ten.
        for(int i = 0; i < 50; i++){ 
            if(ho[i] == '.'){
                break;
            }
            std::cout << ho[i];
        }
        std::cout << " ";

        for(int i = 0; i < 10; i++){            
            if(ten[i] == '.'){
                break;
            }
            std::cout << ten[i];
        }
        std::cout << std::endl;
        //Xuat diem.
        std::cout << t << " " << l << " " << h << " " << tb << "\n";
    }
};


int main(){

    HocSinh A;

    A.Nhap();

    A.Xuat();

    system("pause");

    return 0;
}