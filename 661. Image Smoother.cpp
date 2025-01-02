#include<bits/stdc++.h>
using namespace std;
int main(){}


class Solution {
public:
    vector<int> solve(int i, int j, vector<vector<int>> &img, int n, int m) {
        vector<int> x = { -1, -1, -1, 0, 0, 1, 1, 1 };
        vector<int> y = { -1, 0, 1, -1, 1, -1, 0, 1 };
        int dir = 1;
        int val = img[i][j];
        for(int k=0; k<8; k++){ 
            int ni = i + x[k];
            int nj = j + y[k];

            if(ni >=0  and ni < n and nj >=0  and  nj < m) {
                val += img[ni][nj];
                dir++;
            }
        }
        return {val, dir};
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n, vector<int> (m, 0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) {
                vector<int> curr = solve(i, j, img, n, m); 
                ans[i][j] = curr[0] / curr[1];
            }
        }
        return ans;
    }
};