//Find largest and smallest element in array 

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, arr[n];
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    cout << "How many elements you want in an array?" <<endl;
    cin >> n;
    
    cout << "Enter elements of array:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++) {
        if(arr[i] > largest)
        largest = arr[i];
        
        if(arr[i] < smallest)
        smallest = arr[i];
    }
    
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}
