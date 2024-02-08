//Define a class Complex with members real and imag. Use a constructor to construct
//the objects of the class Complex. Using static data members and static member 
//function, display the total number of objects created before terminating the program.

#include<iostream>

using namespace std;

class Complex{
    double real, imag;
    static int count;
    public:
    Complex(){
      real=0.00;
      imag=0.00;
      count++; 
    }
    Complex(double a, double b){
        real = a;
        imag = b;
        count++;
    }
    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
    }
    static int getCount(){
        return count;
    } 
   
};
int Complex::count=0;

 void display(Complex& a){
        cout<<"\nThe complex number is: "<<a.getReal()<<" + "<<a.getImag()<<"i"<<endl;
}

 void counter(Complex& a){
        cout<<"\nThe total number of objects created to class Complex till now is: "<<a.getCount()<<endl;
 }

int main(){
    Complex num1;
    display(num1);
    Complex num2(52.9,50.3);
    display(num2);
    Complex num3(25.4,56.5);
    display(num3);
    counter(num2);
}