#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter the x-coordinate: ";
    cin >> x;
    
    cout << "Enter the y-coordinate: ";
    cin >> y;
    
    if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") lies at the Origin." << endl;
    } 
    else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the Y-axis." << endl;
    } 
    else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the X-axis." << endl;
    } 
    else {
        cout << "The point (" << x << ", " << y << ") is neither on the X-axis nor the Y-axis." << endl;
    }

}
