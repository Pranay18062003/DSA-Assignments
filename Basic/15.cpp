#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum = (n *(n+1)*(2*n +1))/6;
    cout<<"Sum of the series is : "<<sum;
}