#include<iostream>
#include "Person.h"

using namespace std;
void Person::getdata(){
    cout<<"Enter your name:";
    cin>>name;
    cout<<"\nEnter age:";
    cin>>age;
}

void Person::display(){
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
}