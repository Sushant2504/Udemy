#include <bits/stdc++.h>
using namespace std;

// here we can use the xor operation to find the unique element in the array where all the elements are present twice except one element


// logic is that like a ^ a = 0 and a ^ 0 = a   
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;


    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int ans = 0;

    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];
    }

    cout<<ans<<endl;

    return 0;
}