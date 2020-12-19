//Binary Search in an array 

#include <iostream>
using namespace std;

int index(int *a, int n, int find) {
    int start = 0;
    int end = n-1;
    int mid;
    
    while(start <=end) {
        mid = (start+end)/2;
        
        if(a[mid] == find) {
            return mid;
        }
        
        else if(find > a[mid]) {
            start = mid+1;
        }
        
        else if(find < a[mid]) {
            end = mid-1;
        }
    }
    
    return -1;
}

int main() {
    int n, arr[n], find;
    
    cout << "How many elements you want in an array?" <<endl;
    cin >> n;
    
    cout << "Enter elements of array in ascending order:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout << "Which element you want to find?" <<endl;
    cin >> find;
    
    if(index(arr, n, find) != -1)
        cout << "Find element at position " << index(arr, n, find)+1 << endl;
        
    else
        cout << "Element doesn't exists"<<endl;
    
    return 0;
}
