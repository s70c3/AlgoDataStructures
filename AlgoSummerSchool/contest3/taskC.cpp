#include <iostream>
#include <cstring>

using namespace std;

int main_4() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    int n;
    std::cin >> n;
    int array[n];
    int array_b[n];
    int min = 1000000;
    int max = 0;
    int a;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        array[i] = a;
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }
    int num = abs(max) + abs(min);
    int m = abs(min);

    int array_c[num + 1];
    std::memset(array_c, 0, sizeof(array_c));

    for (int i = 0; i < n; i++) {
        array_c[array[i] + m] = array_c[array[i] + m] + 1;
    }
    for (int i = 1; i < num + 1; i++) {
        array_c[i] = array_c[i] + array_c[i - 1];
    }
    for (int i = n - 1; i > -1; i--) {
        array_c[array[i] + m] = array_c[array[i] + m] - 1;
        array_b[array_c[array[i] + m]] = array[i] + m;
    }
    for (int i = 0; i < n; i++) {
        std::cout << array_b[i] - m << " ";
    }
    std::cout << std::endl;
    return 0;
}