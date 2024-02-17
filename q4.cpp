//Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float pi = 3.1415;
    float radius,height;
    cout<<"Enter radius of cylinder : ";
    cin>>radius;
    cout<<"Enter height of cylinder : ";
    cin>>height;
    float volume = pi*radius*radius*height;
    cout<<"The volume of cylinder is "<<volume;
    return 0;
}