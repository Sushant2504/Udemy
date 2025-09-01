#include <bits/stdc++.h>
using namespace std;

// this problem is also known as the hamiltonian path problem 

int tsp(vector<vector<int>> &dist, int setOfcities, int city, int n ) {
    int n = dist.size();
    // base case
    if(setOfcities == ((1 << n) - 1)) { // all the cities have been visited
        return dist[city][0]; // return to the starting point
    }

    int ans = INT_MAX;
    for(int choice=0; choice < n; choice++) {
    // neeed to check that city is visited or not
       if(setOfcities & (1 << choice) == 0) {
              int subprob =  dist[city][choice] +  tsp(dist, setOfcities | (1 << choice), choice, n);    
              ans = min(ans, subprob);
       } 

    }

    return ans; 
     
}

int tspdp(vector<vector<int>> &dist, int setOfcities, int city,  int n, vector<vector<int>> &dp) {

     if(setOfcities == ((1 << n) - 1)) { // all the cities have been visited
        return dist[city][0]; // return to the starting point 
     }

     if(dp[setOfcities][city] != -1) {
            return dp[setOfcities][city];
     }

     int ans = INT_MAX;

     for(int choice=0; choice < n; choice++) {
    // neeed to check that city is visited or not
       if(setOfcities & (1 << choice) == 0) {
              int subprob =  dist[city][choice] +  tsp(dist, setOfcities | (1 << choice), choice, n);    
              ans = min(ans, subprob);
       } 

    }

    dp[setOfcities][city] = ans;
    return dp[setOfcities][city]; // store the result in the dp array as the minimum distance of the travellling salesman 

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> dist = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };   

    int n = dist.size();

    tsp(dist, 1, 0, dist.size());

    vector<vector<int>> dp((1 << n), vector<int>(dist.size(), -1));     

    return 0;
}