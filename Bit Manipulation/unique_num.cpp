#include <bits/stdc++.h>
using namespace std;


// question -> to extract the two unique numbers from the array

void  uniqueNo2(vector<int> arr) {
      int n = arr.size();
    
      int result = 0;
      for(int i=0; i<n; i++) {
          result = result ^ arr[i];
      }

      int pos = 0;
      int temp = result;

      // find out the position of the rightmost set bit
      while((temp & 1) == 0) {
          pos++;
          temp = temp >> 1;
         
      }

      // filter out the numbers which having bit at that similiar position

      int setA = 0;
      int setB = 0;
      int mask = (1 << pos);

      for(int i=0; i<arr.size(); i++) {
            if((arr[i] & mask) > 0) {
                setA = setA ^ arr[i];
            } else {
                setB = setB ^ arr[i];
            }
      }

      cout<<setA<<endl;
      cout<<setB<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}