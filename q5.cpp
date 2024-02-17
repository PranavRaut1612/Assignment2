//Q5. WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"Enter first character: ";
    cin>>ch1;
    cout<<"Enter second character: ";
    cin>>ch2;
    cout<<"The difference between the ascii of two charcters = "<<(int)ch1-(int)ch2;
    return 0;
}