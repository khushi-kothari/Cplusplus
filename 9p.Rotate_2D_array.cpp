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
    int arr[no_rows][no_cols], new_arr[no_rows][no_cols];
    
    int val=1;
    for(int row=0; row<no_rows; row++) {
        for(int col=0; col<no_cols; col++) {
            arr[row][col] = val;
            val++;
        }
    }
    
    //by rotating 90deg a.c.w 
    //Each row will be col..
    //1st element of 1st row will be the last element of the 1st col
    for(int row=0; row<no_rows; row++) {
        for(int col=0; col<no_cols; col++) {
            new_arr[no_cols-col-1][row] = arr[row][col];
        }
    }
    
     for(int row=0; row<no_rows; row++) {
        for(int col=0; col<no_cols; col++) {
            cout << new_arr[row][col] << " ";
        }cout <<endl;
     }
    
    return 0;
}
