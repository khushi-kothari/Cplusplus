/*
    Derive total number of combinations
    where n = total number of items
          r = number of items to be choosen
*/

#include <iostream>
using namespace std;

int factorial (int a) {
    int ans=1;
    
    for(int i=2; i<=a; i++) {
        ans *= i;
    }
    
    return ans;
}

int ncr (int n, int r) {
    int ans=0;
    ans = (factorial(n))/(factorial(r) * factorial(n-r));
    
    return ans;
}

int main() {
    int n, r;
    cout << "Enter n and r" << endl;
    cin >> n >> r;
    
    cout << "Total combinations will be: " << ncr(n,r) << endl;
    
    return 0;
}
