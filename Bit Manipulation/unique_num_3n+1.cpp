#include <bits/stdc++.h>
using namespace std;

// Question -> unique numbers - Given 3n+1 numbers where every number is coming thrice except one
// numbers find that unique number

void updateSum(vector<int>& sumArr, int x) {
     for(int i=0; i<32; i++) {
         if((x >> i) & 1) {
             sumArr[i]++;
         }
     }
     
}


int BittoInt(vector<int>& sumArr) {
     int ans = 0;
     for(int i=0; i<32; i++) {
         ans += (sumArr[i] * (1 << i)); 
     }

     return ans;

}
// the function for finding the 
int uniqueNo3(vector<int> arr) {
     vector<int> sumArr(32, 0);

     for(int x: arr) {
         updateSum(sumArr, x);
     }

     for(int i=0; i<32; i++) {
            sumArr[i] = sumArr[i] % 3;
     }

     return BittoInt(sumArr);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 3, 5, 4, 3, 5, 1, 5, 3, 1};
    cout<<uniqueNo3(arr)<<endl;


      

    return 0;
}