//Write a program to convert angle in degree to redian. Take the input from the keyboard and dispay the output on screen. 
#include<iostream>
#define PI 3.142
using namespace std;

int main(){
    int deg;
    float rad;
    cout<<"Enter the value in degree: "<<endl;
    cin>>deg;
    rad = PI * deg/180;
    cout<<"The angle in radian: "<<rad;
    return 0;
    
}