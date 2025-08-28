#include <bits/stdc++.h>
using namespace std;


void flip_row(vector<vector<int>>& grid, int row) {
    for(int i=0; i<grid[row].size(); i++) {
        grid[row][i] ^= 1; // toggle bit
    }
}

void flip_col(vector<vector<int>>& grid, int col){
    for(int i=0; i<grid.size(); i++) {
        grid[i][col] ^= 1; // toggle bit
    }
}

int compute_sum(vector<vector<int>>& grid) {
    int ans = 0;
    for(int i=0; i<grid.size(); i++) {
        int cnt = 0;
        for(int j=0; j<grid[0].size(); j++) {
            cnt = cnt * 2 + grid[i][j];  // binary number
        }
        ans += cnt;
    }
    return ans;
}

int matrixScore(vector<vector<int>> grid) {
    int m = grid.size();
    int n = grid[0].size();

    // Step 1: Make first column all 1s
    for(int i=0; i<m; i++) {
        if(grid[i][0] == 0) {
            flip_row(grid, i);
        }
    }

    // Step 2: For each column, flip if more 0s than 1s
    for(int i=0; i<n; i++) {
        int cnt1 = 0;
        for(int j=0; j<m; j++) {
            if(grid[j][i] == 1) cnt1++;
        }
        if(cnt1 < m - cnt1) { // if 0s are more than 1s
            flip_col(grid, i);
        }
    }

    // Step 3: Compute score
    return compute_sum(grid);
}

// int main() {
//     vector<vector<int>> grid = {{0,0,1,1},{1,0,1,0},{1,1,0,0}};
//     cout << matrixScore(grid) << endl;  // Output: 39
// }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}