#include <iostream>

int main_6() {
    int n, k;
    std::cin>>n>>k;
    int a[k];
    for(int i = 0; i<k; i++) {
        std::cin>>a[i];
    }
    int min = 1.5*100000;
    for(int i = 0; i<n-k+1; i++) {
        for(int j = 0; j<k; j++) {
            if(a[j]<min) {
                min = a[j];
            }
        }
        std::cout<<min<<std::endl;
        min=1.5*100000;
        for(int j = 0; j<k; j++) {
            a[j]=a[j+1];
        }
        std::cin>>a[k-1];
    }
    return 0;
}