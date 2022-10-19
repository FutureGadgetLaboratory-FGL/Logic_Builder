// C++ Program to Calculate Area of Square

#include <iostream>
using namespace std;

int main(){
    int side, area;
    
    // Asking for input
    cout << "Enter the side of square: ";
    cin >> side;
    
    // Calculating area
    area = side * side;
    
    // Displaying output
    cout << "Area of square of side " << side << " is: " << area;
    return 0;
}
