#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length of the rectangle: ";
    cin>>len;
    int wid;
    cout<<"Enter the width of the rectangle: ";
    cin>>wid;
    float area = len * wid;
    float perimeter = 2*(len + wid);
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
    if(area > perimeter){
        cout<<"The area is greater than the perimeter."<<endl;
    }
    else{
        cout<<"The perimeter is greater than the area."<<endl;
    }
}