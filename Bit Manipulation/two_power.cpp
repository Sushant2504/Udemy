#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    // here the logic is that like if we making and there between and that of 16 and 15 then it will give you 0
    if((n & (n - 1)) == 0) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }

    


    return 0;
}