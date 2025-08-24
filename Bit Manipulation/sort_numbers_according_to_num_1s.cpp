#include<bits/stdc++.h>
using namespace std;


bool comparebysecond(const pair<int, int> &a, const pair<int, int>& b) {
       if (a.second == b.second) return a.first < b.first;   // tie-break by value
       return a.second < b.second;
}

int count_bits_hack(int n) {
    int cnt = 0;
    while(n) {
        n = n & (n - 1); 
        cnt++;
    }
    return cnt;
}  

vector<int> sortByBits(vector<int> arr) {
     vector<int> ans;
     
     int n = arr.size();
     
     vector<pair<int, int>> count;
     
     for(int i=0; i<n; i++) {
          int a = arr[i];
          int b = count_bits_hack(arr[i]);
          
          count.push_back({a, b});
     }
     
     sort(count.begin(), count.end(), comparebysecond);
     
     for(auto i: count) {
          ans.push_back(i.first);
     }
     
     return ans;
     
     
}