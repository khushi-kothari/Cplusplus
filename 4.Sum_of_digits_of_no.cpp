//Sum of digits of a number

#include <iostream>
using namespace std;

int main() {
    //1249 -> 1+2+4+9
    int num, sum=0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    while(num!=0) {
        int rem;
        rem = num%10;
        sum+=rem;
        num = num/10;
    }
    
    cout << "The sum is: " << sum << endl;
    
    return 0;
}
