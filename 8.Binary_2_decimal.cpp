//Binary to decimal converter

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, num, sum=0;
    cout << "How many numbers you want to convert? ";
    cin >> N;
	
    
	for(int j=0; j<N; j++, sum=0) {
    cout << "Enter a binary number: ";
		cin >> num;
    for(int i=0; num>0; i++) {
        int rem = num%10;
        sum += rem*pow(2,i);
        num = num/10;
    }
	cout << "Decimal conversion is: " << sum << "\n";
	}
    
    
    return 0;
}
