#include <bits/stdc++.h>
using namespace std;


void clearrangeofbits(int &n, int i, int j) {
    int a = (-1 << (j + 1)); // this will create the mask for the left part 
    int b = (1 << i) - 1; // this will create the mask for the right part 
    int mask = a | b; // this will create the mask for the range of bits 
    n = n & mask; // this will clear out the range of bits          
}

void replacebits(int &n, int i, int j, int m) {
    clearrangeofbits(n, i, j);
    int mask = (m << i);     
    n = n | mask; // this will replace the bits from i to j with the
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // the replace bits from i to j with the bits of m

    int n, m, i, j;
    cin >> n >> m >> i >> j;    

    replacebits(n, i, j, m);

    return 0;
}