/******************************************************************************
 
    Pascal's Traingle
    
    for n=5
    
    0c0
    1c0 1c1
    2c0 2c1 2c2
    3c0 3c1 3c2 3c3
    4c0 4c1 4c2 4c3 4c4
    5c0 5c1 5c2 5c3 5c4 5c5
    
    1 
    1 1 
    1 2 1 
    1 3 3 1 
    1 4 6 4 1 
    1 5 10 10 5 1
    

*******************************************************************************/

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

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=i; j++) {
            cout << ncr(i, j) << " ";
        } cout << endl;
    }

    return 0;
}
