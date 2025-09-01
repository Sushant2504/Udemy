#include <bits/stdc++.h>
using namespace std;

int charToInt(char c) {
    return c - '0';
}

int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string str1, str2;
     cin >> str1 >> str2;

     string result = "";

     reverse(str1.begin(), str1.end());
     reverse(str2.begin(), str2.end()); 

     int carry = 0;

     for(int i=0; i<str1.length(); i++) {
         int d1 = charToInt(str1[i]);
         int d2 = charToInt(str2[i]);
         int sum = d1 + d2 + carry;
         carry = sum / 10;
         int temp = sum % 10;
         result.push_back(temp + '0');
     }

     for(int i=str1.length(); i<str2.length(); i++) {
         int d1 = charToInt(str1[i]);
         int d2 = charToInt(str2[i]);
         int sum = d1 + d2 + carry;
         carry = sum / 10;
         int temp = sum % 10;
         result.push_back(temp + '0');
     }

     if(carry) {
         result.push_back(carry + '0');
     } 

     reverse(result.begin(), result.end());


     cout << result << endl;

    return 0;
}