//Bubble sort in an array 

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    
    cout << "How many elements you want in an array?" <<endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter elements of array:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    //5, 4, 3, 2, 1
    int temp;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
        if(arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
    }
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
