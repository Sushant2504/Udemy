

// Hamming Distance
// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

// Given two integers x and y, return the Hamming distance between them.

// Constraints:

// 0 <= x, y <= 2^31 - 1


#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    int ans = 0;
    
    int i=0; 
    
    while(i < 32) {
         if(((x >> i) & 1) ^ ((y >> i) & 1)) ans++;
         
         i++;
    }
    
    return ans;
    
    
}