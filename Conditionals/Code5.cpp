#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter first side: ";
    cin >> a;
    int b;
    cout << "Enter second side: ";
    cin >> b;
    int c;
    cout << "Enter a third side: ";
    cin >> c;
    if(a==b && b==c){
        cout<<"equilateral"<<endl;
    }
    else if(a==b || b==c || a==c){
        cout<<"Isosceles"<<endl;
    }
    else{
        cout<<"Scalene"<<endl;
    }
}