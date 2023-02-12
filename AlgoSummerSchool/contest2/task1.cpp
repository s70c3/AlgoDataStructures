#include <iostream>
#include <vector>

int main_3() {
    std::vector <int> array;
    int n;
    std::cin>>n;
    int a;
    for (int i = 0; i < n; i++ ){
        std::cin>>a;
        array.push_back(a);
    }
    int count=0;
    int old_count = 0;
    int t=0;
    for (int i = 0; i < n; i++ ){
        old_count=count;
        for (int j = 0; j < n-1; j++ ){
            if(array[j]>array[j+1]) {
                std::swap(array[j], array[j + 1]);
                count++;
            }
        }
        if(old_count==count) {
            break;
        }
    }
    for (int i = 0; i < n; i++ ){
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl<<count;
    return 0;
}
