/*Define a class Complex with members real and imag. Use a constructor to construct the
objects of the class Complex. Using the friend function, calculate the magnitude of the
Complex number.*/

#include<iostream>
#include<math.h>

using namespace std;
class Complex{
    float real;
    float imag;

    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(float real, float imag):real(real), imag(imag){};

    void setReal(){
        cout<<"Set a value for real part of the complex number:";
        cin>>real;
    }
    void setImag(){
        cout<<"Set a value for imaginary part of the complex number:";
        cin>>imag;
    }

    float getReal(){
        return real;
    }

    float getImag(){
        return imag;
    }

    void display(){
        cout<<"\nThe complex number is: "<<getReal()<<" + "<<getImag()<<"i"<<endl;
    }
    friend double magnitude (Complex& a);
};

double magnitude(Complex& a){
    double mag;
    mag = sqrt(a.real * a.real + a.imag * a.imag);
    return mag;
}

int main(){
    Complex C1(3,5);
    double mag = magnitude(C1);
    C1.display();
    cout<<"The magnitude is "<<mag<<"units";

}
