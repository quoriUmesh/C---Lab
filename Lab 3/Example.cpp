/*Write a C++ program that calculates the area of the cube (length in integer value and default
length is 10 meter), circle (radius in decimal value) and rectangle (length and breadth in decimal
values). You must provide options to enter the input dimensions of above solids. (Use function
overloading with default arguments.).*/

#include<iostream>
#define PI 3.142
using namespace std;

void area(int side=10){
    int area = 6*side*side;
     cout<<"The area of the cube is "<<area<<" sq. units"<<endl;
}
void area(float radius){
    float area = PI * radius *radius;
     cout<<"The area of the circle is "<<area<<" sq. units"<<endl;
}
void area(float length, float breadth){
    float area =  length * breadth;
    cout<<"The area of the rectangle is "<<area<<" sq. units"<<endl;
}

int main(){
    
    int side;
    float radius, length, breadth;
    cout<<"Enter the integer value for side of cube: ";
    cin>>side;
    cout<<"\nEnter the decimal value for radius of circle: ";
    cin>>radius;
    cout<<"\nEnter the decimal value for length and breadth of rectangle: "<<endl;
    cin>>length>>breadth;
    
    area();
    area(side);
    area(radius) ;
    area(length, breadth);

    return 0;
}