//Check if the given string is a palindrome or not
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isPalindrome(char a[]) {
    int i=0;
    int j = strlen(a)-1;
    
    while(i<j) {
        if(a[i] != a[j]) {
            return false;
        }
        else if(a[i] == a[j]) {
            i++;
            j--;
        }
    }
    
    return true;
}

int main() {
    char a[101];
    //cin.getline(a, 100);
    cin.getline(a, 99);
    
    if(isPalindrome(a)) {
        cout << "String is a Palindrom";
    }
    
    else {
        cout << "String is not a palindrom";
    }
    
    return 0;
}
