#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded) {
    int n = encoded.size() + 1;
    vector<int> perm(n);
    
    int total = 0; // calculate the xor of all the elements from 1 to n
    for(int i=1; i<=n; i++) {
         total ^= i;
    }
    
    int oddXor = 0; // this will store the xor of all the odd indexed elements in the encoded array
    for(int i=1; i<encoded.size(); i += 2) {
         oddXor ^= encoded[i];
    }
    
    perm[0] = total ^ oddXor; // this will give you the first element in the perm array
    
    for(int i=0; i<encoded.size(); i++) {
         perm[i+1] = perm[i] ^ encoded[i]; // this will give you the next element in the perm array
    }
     
    
    return perm;
    
    
}