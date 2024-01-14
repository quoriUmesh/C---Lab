//define a class Complexwith attributes real(Constant) and imag and a constant meember function to return 
//the real value and a normal function to return he imaginary value of complex number. Display the cpmplex number 
//outside the classs using constant function.
#include<iostream>

using namespace std;

class Complex{
     const float real;
     float imag;

    public:
    Complex(float real, float imag):real(real), imag(imag){};
    float getReal() const{
       
        return real;
    }

    float getImag(){
       
        return imag;
    }

};


 void display(Complex& a){
    cout<<"\nThe complex number is: "<<a.getReal()<<"+"<<a.getImag()<<"i"<<endl;
    }
   
int main(){
    float realPart, imagPart;
    cout<<"\nEnter the real value of the complex number:";
    cin>>realPart;
    cout<<"\nEnter the imaginary value of the complex number:";
    cin>>imagPart;
    Complex num1(realPart, imagPart);
    display(num1);
}