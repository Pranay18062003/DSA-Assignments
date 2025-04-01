#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a score: ";
    cin >> a;
    int b;
    cout << "Enter b score: ";
    cin >> b;
    int c;
    cout << "Enter c score: ";
    cin >> c;
    if(a < b && a < c){
        cout << " a scored lowest.";
    }
    else if(b < a && b < c){
        cout <<"b scored lowest.";
    }
    else{
        cout <<"c scored lowest.";
    }
}

// int minMarks = min(a, min(b, c));  // Find the minimum score

//     cout << "Student(s) scoring lowest: ";
//     if (a == minMarks) {
//         cout << "A ";
//     }
//     if (b == minMarks) {
//         cout << "B ";
//     }
//     if (c == minMarks) {
//         cout << "C ";
//     }

//     cout << "scored lowest with " << minMarks << " marks." << endl;

//     return 0;
// }