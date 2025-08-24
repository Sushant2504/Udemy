#include <bits/stdc++.h>
using namespace std;


bool poweroffour(int n) {
    if(n <= 0) return false;
    if((n & (n - 1)) == 0) { // to check the power of two 
        if(n % 3 == 1) { // to check the power of four 
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    poweroffour(n) ? cout<<"Yes"<<endl : cout<<"No"<<endl;

    return 0;
}