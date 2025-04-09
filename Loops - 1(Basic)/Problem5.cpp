#include<iostream>
using namespace std;
int main(){
    int a, n;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=a; i<=n; i++){
        char x = char(i);
        cout<<x<<endl;

    }
}