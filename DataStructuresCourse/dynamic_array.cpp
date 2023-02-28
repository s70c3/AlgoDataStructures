//
// Created by Mari Rum on 28.02.2023.
//
#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    //task 1
    std::vector<int> ar = {0, -4, 10, 2, -43, 25, 100, 7};

    for(int i=0; i<ar.size(); i++) {
        cout<<ar[i]<<" ";
    }
    //task 2
    vector<char> ar;

    char x;
    while (!feof(stdin)) {
        cin >> x;
        ar.push_back(x);
    }

    cout<<ar[1]<<" "<<ar[5];

    //task 3
    std::vector <char> buffer;
    buffer.reserve(512);
    string x = "methods: size; push_back;";
    for(int i=0; i<25; i++) {
        buffer.push_back(x[i]);
    }
    cout<<buffer.size()<<' '<<buffer.capacity();

    return 0;
}