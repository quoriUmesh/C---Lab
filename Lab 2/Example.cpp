//Write a program to swap numbers using reference variables. Initialize the variables
//used to store the number dynamically.

#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x=y;
    y=temp;
}

int getnum(){
    int x;
    cin>>x;
    return x;
}

int main(){
    cout<<"Enter number a: "<<endl;
    int a = getnum();

    cout<<"Enter number b: "<<endl;
    int b = getnum();

    cout<<"Values before swap: a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"Values after swap: a = "<<a<<" b = "<<b<<endl;

    return 0;
}