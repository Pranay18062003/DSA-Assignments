#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n terms: ";
    cin>>n;
    for(int i=4; i<= 1 + 3*n; i+=3){
        cout<<i<<endl;
    }
}