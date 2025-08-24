#include <bits/stdc++.h>
using namespace std;

int converttoBinary(int n) {
    int ans = 0;
    int p = 1; // this is the place value 
    while(n > 0) {
        int last_bit = (n & 1); // this will give you the last bit 
        ans += (last_bit * p);
        p = p * 10; // this will update the place value 
        n = n >> 1; // this will right shift the bits 
    }
    return ans;
}    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     

    return 0;
}