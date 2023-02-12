#include <iostream>

int main7() {
    int n, k;
    std::cin >> n >> k;
    int A[n], B[n], C[n];
    for(int i = 0; i<n; i++) {
        std::cin>>A[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % k)
            B[i] = std::min(A[i], B[i - 1]);
        else
            B[i] = A[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        if ((i + 1) % k)
            C[i] = std::min(A[i], C[i + 1]);
        else
            C[i] = A[i];
    }
    for (int i = 0; i < n-k+1; i++) {
        std::cout<<std::min(C[i], B[i + k - 1])<<std::endl;
    }
    return 0;
}