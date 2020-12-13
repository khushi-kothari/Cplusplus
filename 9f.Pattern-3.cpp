//Alternating 1 & 0 pattern

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout <<"Enter a value: ";
    cin >> n;
    int k=1;
    
    /*
    for n=5
    10
    010
    1010
    01010
    101010
    
    - Print i+1 numbers in each row (i=row number)
    - If i -> odd start with 1
    - If i -> even start with 0
    */
    
    for(int i=1; i<=n; i++) {
        k = i%2 == 1 ? 1:0;
        
        for(int j=0; j<=i; j++) {
            cout << k;
            k = k==1 ? 0:1;
        }
        cout << endl;
    }
    
    return 0;
}
