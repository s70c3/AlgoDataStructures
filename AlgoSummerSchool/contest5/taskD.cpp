#include <iostream>

int main_8() {
    int n;
    std::cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    int ans = A[0],
            l = 0,
            r = 0,
            sum = 0,
            minus_pos = -1;
    for (int j=0; j<n; ++j) {
        if(A[j]==0 && minus_pos==j-1) {
            minus_pos = j;
            continue;
        }
        sum += A[j];

        if (sum > ans) {
            ans = sum;
            l = minus_pos + 1;
            r = j;
        }

        if (sum < 0) {
            sum = 0;
            minus_pos = j;
        }
    }
    std::cout << l << " " << r;

}