//Decimal to binary converter

#include <iostream>
using namespace std;

int main() {
    int decimal, binary[20], i=0;
    
    cout << "Enter a decimal number you want to convert to binary: ";
    cin >> decimal;
    
    //10
    
    while(decimal != 0) {
        binary[i] = decimal%2;
        i++;
        decimal /= 2;
    }
    
    for(int j=i-1; j>=0; j--) {
        cout << binary[j] << " ";
    }
    
    return 0;
}
