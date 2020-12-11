#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //n is total no. of rows
    
    /*for n=5
    
        1
       232
      34543
     4567654
    567898765
    
    */
    
    //Row is the no. of row u r on
    for(int row=1; row<=n; row++) {
        for(int k=1; k<=n-row; k++) 
        printf(" ");
        
        for(int k=row; k<=2*row-1; k++) {
            printf("%d", k);
        }
        
        for(int k=2*row-2; k>=row; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    
    return 0;
}
