//Remove repeating/trailing duplicate letters
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
    char a[101];
    cin.getline(a, 100);
    
    int j=0;
    int i=1;
    cout << a[j];
    while(a[i] != '\0') {
        if(a[j] == a[i]) {
            i++;
        }
        else if(a[j] != a[i]) {
            cout << a[i];
            j = i;
            i++;
        }
    }
    
    return 0;
}
