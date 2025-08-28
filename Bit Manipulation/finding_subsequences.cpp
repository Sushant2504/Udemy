#include <bits/stdc++.h>
using namespace std;

// print all the possible subsequences of the array using the pattern of the binary numbers

// the total possible subsequances = pow(2, n);

void overLayNumber(vector<char> arr, int number) {
    int j = 0;
    while(number > 0) {
         int last_bit = (number & 1);

         if(last_bit) {
             cout<<arr[j];
         }

         j++;
         number = number >> 1;
    }

    cout<<endl;

}

void generateAllSubsequences(vector<char>&  arr) {
    int n = arr.size();
    int total = (1 << n); // this will give you the total number of subsequences 

    for(int i=0; i<total; i++) {
        overLayNumber(arr, i);
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> arr = {'a', 'b', 'c'};
    generateAllSubsequences(arr);

    return 0;
}