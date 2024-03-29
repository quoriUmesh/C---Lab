//Modify the above program for constant object.
#include<iostream>

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

    float getReal() const{
        return real;
    }

    float getImag()const{
        return imag;
    }

    void display() const{
        cout<<"\nThe complex number is: "<<getReal()<<" + "<<getImag()<<"i"<<endl;
    }
};

int main(){
    const Complex c1(3,5);
    c1.display();
    
    Complex c2(6,9);
    c2.display();

    return 0;
}