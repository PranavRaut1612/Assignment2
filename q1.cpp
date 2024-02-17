//Q1. Find the output for this code. Let input:- 2 3 6
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first value: ";
    cin>>x;
    int y,m;
    cout<<"Enter second value and modulus value: ";
    cin>>y>>m;
    int z = (x*y)%m;
    cout<<"The output : "<<z;
    return 0;
}
