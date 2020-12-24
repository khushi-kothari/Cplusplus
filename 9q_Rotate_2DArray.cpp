//Rotate image 90deg anticlockwise
/*
    for 3X3
    1 2 3
    4 5 6 
    7 8 9
    
    O/P:-
    
    3 6 9                                                                                                                                  
    2 5 8                                                                                                                                  
    1 4 7       
*/

#include <iostream>
using namespace std;

int main() {
    int no_rows, no_cols;
    cin >> no_rows >> no_cols;
    int arr[no_rows][no_cols] = {0};
    
    int val=1;
    for(int row=0; row<no_rows; row++) {
        for(int col=0; col<no_cols; col++) {
            arr[row][col] = val;
            val++;
        }
    }
    
     for(int col=no_cols-1; col>=0; col--) {
        for(int row=0; row<no_rows; row++) {
            cout << arr[row][col] << " ";
        }cout <<endl;
     }
    
    return 0;
}
