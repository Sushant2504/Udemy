#include <bits/stdc++.h>
using namespace std;

string shortestSuperstring(vector<string>& words) {
    int n = words.size();

    // Step 1: Precompute overlaps
    vector<vector<int>> overlap(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int m = min(words[i].size(), words[j].size());
            for (int k = m; k >= 0; k--) {
                if (words[i].substr(words[i].size() - k) == words[j].substr(0, k)) {
                    overlap[i][j] = k;
                    break;
                }
            }
        }
    }

    int N = 1 << n;
    vector<vector<int>> dp(N, vector<int>(n, -1));
    vector<vector<int>> parent(N, vector<int>(n, -1));

    // Step 2: DP init
    for (int i = 0; i < n; i++) dp[1 << i][i] = 0;

    // Step 2: DP transitions
    for (int mask = 1; mask < N; mask++) {
        for (int i = 0; i < n; i++) {
            if (!(mask & (1 << i))) continue;
            int pmask = mask ^ (1 << i);
            if (pmask == 0) continue;
            for (int j = 0; j < n; j++) {
                if (!(pmask & (1 << j))) continue;
                int val = dp[pmask][j] + overlap[j][i];
                if (val > dp[mask][i]) {
                    dp[mask][i] = val;
                    parent[mask][i] = j;
                }
            }
        }
    }

    // Step 3: find best endpoint
    int mask = N - 1, last = 0, best = -1;
    for (int i = 0; i < n; i++) {
        if (dp[mask][i] > best) {
            best = dp[mask][i];
            last = i;
        }
    }

    // Step 4: reconstruct path
    vector<int> path;
    while (last != -1) {
        path.push_back(last);
        int temp = parent[mask][last];
        mask ^= (1 << last);
        last = temp;
    }
    reverse(path.begin(), path.end());

    // Step 5: build result string
    string ans = words[path[0]];
    for (int i = 1; i < path.size(); i++) {
        int ov = overlap[path[i-1]][path[i]];
        ans += words[path[i]].substr(ov);
    }
    return ans;
}

// int main() {
//     vector<string> words = {"catg","ctaagt","gcta","ttca","atgcatc"};
//     cout << shortestSuperstring(words) << endl;
// }
