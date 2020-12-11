//Squaring of a number

#include <iostream>
using namespace std;

int main() {
    int N, num;
    cout << "How many squared numbers you want to find? : ";
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cout << "Enter a number you want square of: ";
        cin >> num;
        cout << "Square of " << num << " is: " <<num*num <<endl;
    }
    
    return 0;
}
