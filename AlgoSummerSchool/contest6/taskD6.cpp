//
// Created by Mari Rum on 17.06.2022.
//
//Процедура Stones(P[1..N],W)
//00  для i от 0 до N A[i,0] ← 0
//01  для j от 1 до W A[0,j] ← 0
//02  для i от 1 до N
//03     для j от 1 до W
//04	   если j – P[i] >=0
//05           то A[i,j] ← max(A[i-1,j], //оставим тот же набор камней
//A[i-1,j-P[i]]+P[i]) //или заменим несколько камней на i-й
//06           иначе A[i,j] ← A[i-1,j]
//07  вернуть A[N,W]   // таблица ДП

#include <iostream>


//int findAns(int k, int s) {
//    if A[k][s] == 0
//    return
//    if (A[k - 1][s] == A[k][s]) {
//    findAns(k - 1, s);}
//    else {
//    findAns(k - 1, s - w[k])
//    }
//    ans.push(k)
//}
int mainy() {
    int n, w;
    std::cin >> n >> w;
    int s[n];
    int A[n+1][w+1];
    int prev[n][w];
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        A[i][0] = 0;
    }
    for (int j = 0; j < w; j++) {
        A[0][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=w; j++) {
            if (j - s[i] >= 0) {
                A[i][j] = std::max(A[i - 1][j], A[i - 1][j - s[i]] + s[i]);
            } else {
                A[i][j] = A[i-1][j];
            }
        }
    }
    std::cout<<A[n][w];
}