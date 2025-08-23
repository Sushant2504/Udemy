#include <bits/stdc++.h>
using namespace std;


// all the bit oper

int getithbit(int n, int i) {
    return (n & (1 << i)) != 0;
}

// the bitmask is the -> mask = (1 << i)

int setithbit(int n, int i) {
    return (n | (1 << i));
}

void clearithbit(int &n, int i) {
    int mask = ~(1 << i);
    n = n & mask;  // here we are updating the ith bit from 1 to that of 0 
}


void updateithbit(int &n, int i, int v) {
    clearithbit(n, i);
    int mask = (v << i);
    n = n | mask;
}
    

// to clear last ith bits 
void clearlastibits(int &n, int i) { // the mask should be bound of all the last ith bits count  
    int mask = (-1 << i);
    n = n & mask; // this will clear out the the last 0 <-> 1 pairs 
}


// to clear the range of bits from i to j
void clearrangeofbits(int &n, int i, int j) {
    int a = (-1 << (j + 1)); // this will create the mask for the left part 
    int b = (1 << i) - 1; // this will create the mask for the right part 
    int mask = a | b; // this will create the mask for the range of bits 
    n = n & mask; // this will clear out the range of bits          
}

int main() {
    int n, i; 
    cin >> n >> i;

    cout << getithbit(n, i) << endl;  
}