//Write a program to convert temperature from degree centigrade to degree
//Fahrenheit and viceversa. Take necessary inputs from keyboard and display the outputs on screen.

#include<iostream>

using namespace std;

int main(){
    int cent;
    float fahren;

    cout<<"Enter the value on degree centigrade: "<<endl;
    cin>>cent;

    fahren = (cent*9.0/5.0)+32;
    cout<<"The value on degree Fahrenheit: "<<fahren;
    return 0;
}