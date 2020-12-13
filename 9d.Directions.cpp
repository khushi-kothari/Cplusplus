//Find the final position
//Find the displacement

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    char ch;
    ch =cin.get(); 
    //cin.get can take all the characters as input including special characters like space, \n, etc.
    //NNNSSEEWE
    
    //Initially starting from origin
    int x=0, y=0;
    
    while (ch != '\n') {
        
        if(ch=='N' or ch=='n')
        y++;
        
        else if(ch=='S' or ch=='s')
        y--;
        
        else if(ch=='E' or ch=='e')
        x++;
        
        else if(ch=='W' or ch=='w')
        x--;
        
        ch =cin.get(); 
    }
    
    cout << "Final displacement is " << sqrt(pow(x,2) + pow(y,2));
    cout << " and final position is (" << x << "," << y << ")";
    
    return 0;
}
