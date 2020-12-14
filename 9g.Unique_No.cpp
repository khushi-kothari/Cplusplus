//Find a unique number from a list of numbers

#include <iostream>
using namespace std;

/*
    I Approch
    -Store list of numbers in an array
    -Compare each elements using 2 for loops 
    -Find the unique number
    
    This is a correct approch but will acquire more space 
    and have O(n^2) time complexitiy
*/

/* 
    II Approch
    -Don't store list of numbers! (Space efficient)
    -Use ternary operator xor :D (Time efficient it will have O(n) time complexity.)
*/

//II Approch

int main () {
    
    int n, num, ans=0;
    cout <<"Enter n" <<endl;
    cin  >> n;
    
    for(int i=0; i<n; i++) {
        cout << "Enter a num: "; 
        cin >> num;
        ans = ans ^ num;
    }
    
    cout << ans <<endl;
    
    return 0;
}
