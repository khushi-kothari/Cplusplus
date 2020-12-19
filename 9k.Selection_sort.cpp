//Selection sort in an array 

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, min_index;
    
    int smallest = INT_MAX;
    
    cout << "How many elements you want in an array?" <<endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter elements of array:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    //5, 4, 3, 2, 1
    
    for(int i=0; i<n; i++) {
        int temp;
        smallest=INT_MAX;
        for(int j=i; j<n; j++) {
            if(arr[j] < smallest) {
            smallest = arr[j];
            min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
