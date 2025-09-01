#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int, int>
#define all(a) (a).begin(), (a).end()
#define endl "\n"   


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
         ll a, b, c, d;
         cin>>a>>b>>c>>d;

         ll half_one = a+b;
         ll half_two = c+d; 
         
         int c1 = true, c2 = true;

         if(a >= b) {
             int temp = a / 3;
             if(temp > b) {
                    c1 = false;
             }
         } else {
             int temp = b / 3;
             if(temp > a) {
                 c2= false;
             }
         }


         if(c >= d) {
             int temp = c / 3;
             if(temp > d) {
                    c2 = false;
             }
         } else {
             int temp = d / 3;
             if(temp > c) {
                 c2 = false;
             }
         }


         cout<<((c1 && c2) ? "YES" : "NO")<<endl;


    }

    return 0;
}