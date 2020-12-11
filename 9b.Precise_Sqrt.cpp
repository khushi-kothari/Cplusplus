//Square Root with perfect precision

#include <iostream>
using namespace std;

int main() {
    int num, pre;
    cin >> num;
    cin >> pre;
    //pre is precision i.e after the decimal
    float ans=0;
    float inc = 1.0;
    
    
    for(int times=0; times<=pre; times++) {
    while (ans*ans <= num) {
        ans += inc;
    }
    ans -= inc;
    inc = inc/10;
    }
    
    cout << ans << endl;
    
    return 0;
}
