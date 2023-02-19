#include<iostream>
using namespace std;
/// @brief 
/// @return 
int main() {
    int a,b,c;
    cin a>>b>>c;
    int max =(a>b)?a:b;
    max =(max>c)?max:c;
    cout<<max;
    return 0;
}