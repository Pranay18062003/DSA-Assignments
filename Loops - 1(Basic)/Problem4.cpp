#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n, a, d;
   cout<<"Enter the terms: ";
   cin>>n;
   cout<<"Enter the first terms: ";
   cin>>a;
   cout<<"Enter the common difference: ";
   cin>>d;
   int lm = a * pow(d, n-1);
   for(int i = a; i<=lm; i*=d){
    cout<<i<<endl;
   }
}