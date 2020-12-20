//Insertion Sort in an array

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
    
    for(int i=1; i<n; i++) {
        int e = arr[i];
         int j = i-1;
         
         while(j>=0 && arr[j] > e) {
            arr[j+1] = arr[j];
            j--;
         }
         arr[j+1] = e;
    }
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
