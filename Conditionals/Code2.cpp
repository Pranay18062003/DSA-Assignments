#include<iostream>
using namespace std;
int main(){
    int a = 4;
    float area  = 3.14 * a * a;
    float circumference = 2 * 3.14 *a;
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    if(area < circumference){
        cout << "Area is smaller than Circumference" << endl;
    }
    else{
        cout << "Area is greater than Circumference" << endl;
    }
 
}