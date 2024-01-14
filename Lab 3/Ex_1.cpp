//1. Write a C++ program to illustrate dynamic allocation and deallocation of memory using
//new and delete.

#include<iostream>
using namespace std;
int *roll = new int;
char *name = new char[15];

void scanRollAndName(){
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your roll no.:";
    cin>>*roll;
}

void freeMemory(){
     delete[] name;
     delete roll;
}

void printRollAndName(){
    cout<<endl<<"Name: "<<name;
    cout<<endl<<"Roll no.: "<<*roll;
}

int main(){
    scanRollAndName();
    cout<<endl<<"Memory alloctaed dynamically for name and roll.";
    cout<<endl<<"Value of Name and Roll before Deallocation.";
    printRollAndName();
    freeMemory();
    cout<<endl<<"After Deallocation: ";
    printRollAndName();
    return 0;
}
