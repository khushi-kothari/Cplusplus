//Spiral Print a 2-D array

/*
    if array is with row=3, cols=3
    1 2 3 
    4 5 6
    7 8 9
    
    Spiral O/P will be 
    1 2 3 6 9 8 7 4 5
*/

#include <iostream>
using namespace std;

void spiralprint (int a[1000][1000], int row, int col) {
    int StartRow = 0, StartCol = 0, EndRow = row-1, EndCol = col-1;
    
    //Print StartRow, StartRow ++
    //Print EndCol, EndCol--
    //Print EndRow, EndRow--
    //Print StartCol, StartCol++
    
    while(StartRow <= EndRow && StartCol <= EndCol) {
        for(int i=StartCol; i<=EndCol; i++) {
        cout << a[StartRow][i] << " "; //1, 2, 3
        }
        StartRow++;
        for(int i=StartRow; i<=EndRow; i++) {
            cout << a[i][EndCol] << " ";
        }
        EndCol--;
        for(int i = EndCol; i>=StartCol; i--) {
            cout << a[EndRow][i] << " ";
        }
        EndRow--;
        for(int i=EndRow; i>=StartRow; i--) {
            cout << a[i][StartCol] << " ";
        }
        StartCol++;
    }
    
}

int main() {
    int row, col;
    
    cin >> row >> col;
    int arr[1000][1000] = {0};
    
    int val =1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            arr[i][j] = val;
            val++;
        }
    }
    
    spiralprint (arr, row, col);
    
    /* 
    //Normal print 
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    */
    
    return 0;
}
