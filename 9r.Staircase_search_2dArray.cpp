//Staircase Search in a 2D Array

#include<iostream>
using namespace std;

int main() {
    int no_rows, no_cols, key;
    cout << "Enter number of rows: ";
    cin >> no_rows;
    cout << "Enter number of cols: ";
    cin >> no_cols;
    cout << "Enter key: ";
    cin >> key;
    
    int arr[no_rows][no_cols];
    
    cout << "Enter all the elemets in an array" << endl;
    for(int row=0; row<no_rows; row++) {
        for(int col=0; col<no_cols; col++) {
            cin >> arr[row][col];
        }
    }
    
    int i=0, j=no_cols-1;
    
    while(1) {
    if(arr[i][j] > key){
        j--;
    }
    else if(arr[i][j] < key) {
        i++;
    }
    else if(arr[i][j] == key) {
        break;
    }
    }
    
    cout << "Key is: " << arr[i][j] << endl << "It is at position (" << i+1 << "," << j+1 << ")";
    return 0; 
}
