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
    

// to clear 

int main() {
    int n, i;
    cin >> n >> i;

    cout << getithbit(n, i) << endl;  
}