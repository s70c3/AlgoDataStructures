#include <iostream>

int main_0() {
    int a;
    int a1, a2, a3, a4;
    std::cin>>a;
    a4 = a%10;
    a3 = a%100/10;
    a2 = a%1000/100;
    a1 = a/1000;
    std::cout << ((a1==a4) * (a2==a3)) << std::endl;
    return 0;
}
