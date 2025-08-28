
// brute force approach

// #include<bits/stdc++.h>
// using namespace std;

// int rangeBitwiseAnd(int left, int right) {
//       int ans = left;
      
      
//       for(int i=left+1; i<=right; i++) {
//            ans &= i;
//            if(ans == 0) return 0;
//       }
      
//       return ans;
      
// }

#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
    //while the prefixes of left and right are same, add them to answer, the moment they change, break from loop:
    int ans = 0;
    for(int i = 31; i >= 0 ; i--){
        int pow = 1LL<<i;
        int bitL = (left&pow) > 0, bitR = (right&pow) > 0;
        if(bitL == bitR){
            ans += bitL*pow;
        }else{
            break;
        }
    }
    return ans;
}
