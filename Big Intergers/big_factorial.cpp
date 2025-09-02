#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int>& a, int no, int& size) {
    int carry = 0;
    for(int i=0; i<size; i++) {
        int prod = a[i] * no + carry;
        a[i] = prod % 10;
        carry = prod / 10;
    }

    while(carry) {
        a.push_back(carry % 10);
        carry /= 10;
        size++;
    } 
     
}

void bigFactorial(int n) {
     vector<int> ans(1000, 0);
     ans[ 0] = 1;
     int size = 1;

     for(int i=2; i<=n; i++) {
         multiply(ans, i, size);
     }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}