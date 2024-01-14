//Redo the above program using pointer variables insted of reference variables.
//Write a program to swap numbers using reference variables. Initialize the variables
//used to store the number dynamically.

#include<iostream>
using namespace std;

int swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int getnum(){
    cout<<"Enter the number:";
    int a;
    cin>>a;
    return a;
}

int main(){
    int x = getnum();
    int y = getnum();

    cout<<"Values before swap: x = "<<x<<" y = "<<y<<endl;
    swap(&x,&y);
    cout<<"Values after swap: x = "<<x<<" y= "<<y<<endl;

    return 0;
}