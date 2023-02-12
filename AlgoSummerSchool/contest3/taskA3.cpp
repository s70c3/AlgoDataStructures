//
// Created by Mari Rum on 17.06.2022.
//
#include <iostream>

int main10() {
    int n, k;
    std::cin >> n;
    int c[n];
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }
    std::cin >> k;
    int a;
    for (int i = 0; i < k; i++) {
        std::cin >> a;
        c[a-1]--;
    }
    for(int i = 0; i<n; i++) {
        std::cout<<(c[i]<0?"yes":"no")<<std::endl;
    }
}