// brute force approach O(n^2 * 32)

// #include<bits/stdc++.h>
// using namespace std;

// int HammingDistance(int a, int b) {
//      int cnt = 0;
//      for(int i=1; i<=32; i++) {
//           int x = (a>>i)&1;
//           int y = (b>>i)&1;
          
//           if(x!=y) cnt++;
//      }
     
//      return cnt;
     
// }

// int totalHammingDistance(vector<int> nums) {
//      int n = nums.size();
//      int ans = 0;
//      for(int i=0; i<n; i++) {
//           for(int j=i+1; j<n; j++) {
//               ans += HammingDistance(nums[i], nums[j]);
//           }
//      }
     
     
//      return ans;
     
// }


// optimised approach O(n * 32)

#include<bits/stdc++.h>
using namespace std;
 
int totalHammingDistance(vector<int> nums) {
    int n = nums.size();
    int dist = 0;
    for(int i = 0 ; i < 32; i++){
        int one = 0;
        for(int j = 0 ; j < n ; j++){
            one += (nums[j]&1);  // Check if the current bit is 1
            nums[j] >>= 1;  // Right shift the number
        }
        dist += one*(n - one);  // Update the total Hamming distance
    }
    return dist;
}

