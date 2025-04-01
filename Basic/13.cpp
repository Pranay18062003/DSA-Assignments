#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    int y1;
    cout<<"Enter the value of y1: ";
    cin>>y1;
    int x2;
    cout<<"Enter the value of x2: ";
    cin>>x2;
    int y2;
    cout<<"Enter the value of y2: ";
    cin>>y2;
    float distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout<<"Distance is: "<<distance;
}