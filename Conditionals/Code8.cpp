#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "Enter first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter third point (x3 y3): ";
    cin >> x3 >> y3;

    // Checking collinearity using the determinant condition
    if ((x2 - x1) * (y3 - y2) == (x3 - x2) * (y2 - y1)) {
        cout << "The points (" << x1 << ", " << y1 << "), (" 
             << x2 << ", " << y2 << "), (" << x3 << ", " << y3 
             << ") lie on a straight line." << endl;
    } else {
        cout << "The points are not collinear." << endl;
    }
}
