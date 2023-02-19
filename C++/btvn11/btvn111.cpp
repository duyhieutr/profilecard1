#include<iostream>
using namespace std;
class Matrix{
    private:
        const short rows;
        const short cols;
        double elems;
    public:
    Matrix(const short rows, const short cols);
    friend ostream & operator<<(ostream &,Matrix &);
    fiend istream& operator>>(istream &.Matrix);
};
Matrix ::Matrix(const short rows, const short cols){
    this->rows = rows;
    this->cols = cols;
}
ostream & operator<<(ostream & out,Matrix a ){
    out << a.rows << ", " << a.cols<<endl;
    return out;
}
istream & operator>>(istream & in,Matrix &a ){
    in >> a.rows >>", " >> a.cols>>endl;
    return in;
}
#define a() a;
int main(){
    Matrix a(1,2);
    cout<<a.rows<<a.cols<<endl;
}
