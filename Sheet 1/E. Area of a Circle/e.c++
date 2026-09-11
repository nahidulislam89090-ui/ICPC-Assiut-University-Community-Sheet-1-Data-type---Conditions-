// ei program ta c++ diye solve korte hobe
#include <iostream>
using namespace std;
 
#define pie 3.141592653
 
int main() {
    // Variable declaration
    double radius, Area;
 
    cin >> radius;
    Area = pie * radius * radius;
 
    cout << fixed;
    cout.precision(9);
    cout << Area;
 
    return 0;
}