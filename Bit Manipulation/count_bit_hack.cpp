#include <bits/stdc++.h>
using namespace std;

int count_bits_hack(int n) {
    int cnt = 0;
    while(n) {
        n = n & (n - 1); // this will remove the last set bit 
        cnt++;
    }
    return cnt;
}  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}