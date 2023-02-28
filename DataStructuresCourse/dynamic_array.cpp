//
// Created by Mari Rum on 28.02.2023.
//
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    vector<int> ar = {0, -4, 10, 2, -43, 25, 100, 7};

    for(int i=0; i<ar.size(); i++) {
        cout<<ar[i]<<" ";
    }

    return 0;
}