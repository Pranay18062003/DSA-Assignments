#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first integer: ";
    cin>>a;
    int b;
    cout<<"enter the second integer: ";
    cin>>b;
    if(a < b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<a<<" is greater than "<<b<<endl;
    }
}