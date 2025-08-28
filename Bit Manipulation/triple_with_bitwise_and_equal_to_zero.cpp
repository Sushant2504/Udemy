#include<bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> nums) {
    int n = nums.size();
    
    int cnt = 0;
    
    // brute force
    // for(int i=0; i<n; i++) {
    //      for(int j=0; j<n; j++) {
    //           for(int k=0; k<n; k++) {
    //               if((nums[i] & nums[j] & nums[k]) == 0) {
    //                     cnt++;
    //               }
    //           }
    //      }
    // }
    
    
    // optimised approach O(n^2)
    
    unordered_map<int, int> pairs;
    
    for(int i=0; i<n; i++) {
         for(int j=0; j<n; j++) {
              pairs[nums[i] & nums[j]]++;
         }
    }
    
    int ans = 0;
    
    for(auto &[a, b] : pairs) {
          for(int i: nums) {
               if((a & i) == 0) {
                    ans += b;
               }
          }
    }
    
    
    return ans;
    
    
}