#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int w,n(0),f,s,max_c(0),max_w(0);

int main()
{
    cin >> n;
    cin >> w;
    vector<int>weight,cost;
    for(int i = 0;i<n;++i) {
        std::cin >> f;
        weight.push_back(f);
    }
    for(int i = 0;i<n;++i) {
        std::cin >> s;
        cost.push_back(s);
    }


    int matrix[n+1][w+1];
    for(int i = 0;i<=w;++i)matrix[0][i] = 0;
    for(int i = 0;i<=n;++i)matrix[i][0] = 0;
    for(int i = 1;i<=n;++i){
        for(int j = 1;j<=w;++j)
            if(weight[i-1] <= j) matrix[i][j] = max(matrix[i-1][j],matrix[i-1][j-weight[i-1]] + cost[i-1]);
            else matrix[i][j] = matrix[i-1][j];
    }
    vector<int>answer;
    vector<int>cost_ans;
    for(int i = n;;){
        for(int j = w;;){
            if(!matrix[i][j]) break;
            if(matrix[i][j] != matrix[i-1][j]){
                answer.push_back(i);
                cost_ans.push_back(cost[i]);
                max_w += weight[i-1];
                j -= weight[i-1];
            }
            --i;
        }
        break;
    }
    sort(answer.begin(),answer.end());
    cout << max_w << ' ' << max_c << '\n';
    for(int i = 0;i<answer.size();++i) cout << answer[i] << ' ';
    std::cout<<std::endl;
    for(int i = 0;i<answer.size();++i) cout << cost_ans[i] << ' ';
    return 0;
}