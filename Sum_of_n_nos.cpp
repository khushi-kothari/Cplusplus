//Sum of first n numbers

#include <iostream>
using namespace std;

int main() {
    
    int sum=0, i=1, num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    while(i<=num) {
        sum += i;
        i++;
    }
    
    cout << sum <<endl;
    
    return 0;
}
