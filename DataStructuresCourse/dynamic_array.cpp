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
    //task 4

    vector<short> ar_sh;

    short x;
    while (!feof(stdin)) {
        cin >> x;
        ar_sh.push_back(x);
    }

    ar_sh.insert(ar_sh.begin()+2,5);
    ar_sh.pop_back();
    ar_sh.pop_back();
    for (auto i : ar_sh) {
        cout<<i<
        <" ";
    }

    //task 5
    int digit;
    cin >> digit;

    vector <int> divs;
    for(int i=1; i<digit+1; i++) {
        if(digit%i==0) {
            divs.push_back(i);
        }
    }
    for(int i =0; i<divs.size(); i++) {
        cout<<divs[i]<<' ';
    }

    //task 6
    vector <POINT> path;
    path.push_back({0, 0});
    path.push_back({20, -5});
    path.push_back({30, 10});
    path.push_back({100, 0});
    path.push_back({175, 80});

    for (int i =0; i<path.size(); i++) {
        cout<<path[i].x<<" ";
    }
    cout<<endl;
    for (int i =0; i<path.size(); i++) {
        cout<<path[i].y<<" ";
    }
    cout<<endl;
    //task 7
    vector<char> marks[10];
    marks[0].push_back(3);
    marks[0].push_back(4);
    marks[1].push_back(2);
    marks[2].push_back(5);
    marks[2].push_back(5);
    marks[2].push_back(5);
    marks[3].push_back(2);
    marks[3].push_back(2);
    marks[3].push_back(2);
    marks[3].push_back(2);
    marks[3].push_back(2);
    marks[4].push_back(1);
    marks[4].push_back(3);
    marks[5].push_back(3);

    return 0;
}