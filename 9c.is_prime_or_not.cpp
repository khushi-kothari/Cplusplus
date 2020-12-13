//Is it prime or not?

#include <iostream>
using namespace std;

int main() {
    int num, i;
    cin >> num;
    
    for(i=2; i<num; i++) {
        if(num%i == 0) {
            cout << "It isn't a prime number.";
            break;
        }
    }
    
    if(i==num) {
        cout << "It is a prime number!";
    }
    
    return 0;
}
