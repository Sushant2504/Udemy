 #include <bits/stdc++.h>
 using namespace std;


 int count_bits(int n) {
     int cnt = 0;
     while(n) {
         int last_bit = (n&1); // this will remove the last set bit 
         cnt += last_bit;
         n = n >> 1; // this will right shift the bits
     }

     
     return cnt;
 }


 
 int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int n;
     cin>>n;

     int cnt = 0;


     for(int i = 0; i < 32; i++) {
         if(n & (1 << i)) {
             cnt++;
         }
     }

     cout<<cnt<<endl;   
 
     return 0;
 }