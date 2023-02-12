#include <iostream>

int main_1() {
    int a, b, c;
    std::cin>>a>>b>>c;
    int max, min;
    max = std::max(std::max(a, b), std::max(b, c));
    min = std::min(std::min(a, b), std::min(b, c));
    std::cout << (a+b+c)-max-min << std::endl;
    return 0;
}
