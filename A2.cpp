#include<iostream>
using namespace std;
int main(){
    int* p = new int;
int* p2 = p;
*p = 10;
delete p;
cout << *p;
delete p2;
return 0;
}
//tra ket qua khong nhu mong muon
// cap phat bo nho dong cho p2
