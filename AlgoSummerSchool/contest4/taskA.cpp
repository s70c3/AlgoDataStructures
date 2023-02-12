#include <iostream>

int main_5() {
    int first=0, second=0;
    int a=-1;
    while(a!=0) {
        std::cin>>a;
        if (a>=first) {
            second=first;
            first=a;
        }
        else if ((a<first)&&(a>=second)) {
            second=a;
        }
    }
    std::cout<<first<<std::endl<<second;
}
