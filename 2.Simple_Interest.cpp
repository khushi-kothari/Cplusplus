//Simple Interest program

#include <iostream>
using namespace std;

int main() {
    int p, q, r;
    float si;
    
    //cin is used to take inputs
    cout << "Enter three numbers space seperated: ";
    cin>>p>>q>>r;
    
    /*
    or 
    cin>>p;
    cin>>q; 
    cin>>r;
    
    be careful with arrows in cin and cout
    */
    
    si = p*r*q/100.0;
    
    /*
    Typecasting:
    integer/integer = integer
    float/int = float
    int/float = float
    Thus we wrote 100.0 instead of 100
    as 100.0 is a float value
    */
    
    cout<< si <<endl;
    return 0;
}
