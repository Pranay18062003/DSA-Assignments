#include<iostream>
using namespace std;
int main(){
    int head;
    cout<<"Enter the number of head: ";
    cin>>head;
    int legs;
    cout<<"Enter the number of legs: ";
    cin>>legs;
    int chicken = (2* head - 0.5* legs); 
    int dog = 4 - chicken;
    cout<<"Number of chickens: "<<chicken<<endl;
    cout<<"Number of dogs: "<<dog;
}