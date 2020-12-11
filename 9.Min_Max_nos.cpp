//Minimum & maximum of all numbers

#include <iostream>
#include <climits>
using namespace std;

int main() {
    //Total N numbers to be inserted
    int N;
    cin >> N;
    
    //Let min be +infinity
    int min_so_far = INT_MAX;
    //Let max be -infinity
    int max_so_far = INT_MIN;
    
    //Now the upcoming numbers will contradict the existing assumption
    
    int no;
    
    for(int i=0; i<N; i++) {
        //Enter list of N numbers space seperated
        cin >>no;
        if(no<min_so_far) {
            min_so_far = no;
        }
        
        else if(no>max_so_far) {
            max_so_far = no;
        }
    }
    
    cout << min_so_far <<endl;
    cout << max_so_far <<endl;
    return 0;
}
