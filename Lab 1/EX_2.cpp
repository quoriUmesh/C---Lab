//Write a program to convert temperature from degree centigrade to degree
//Fahrenheit and viceversa. Take necessary inputs from keyboard and display the outputs on screen.

#include<iostream>

using namespace std;

int main(){
    float fahren, cent;

    cout<<"Enter the value on degree Fahrenheit: "<<endl;
    cin>>fahren;

    cent = (fahren-32)*5/9;
    cout<<"The value on degree Centigrade: "<<cent;
    return 0;
}