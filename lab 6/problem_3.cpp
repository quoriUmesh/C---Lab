/*Problem3: Define a class Design1 with data members code, qty and price and class
Design2 with data member code and value. (Hint: code = code, value = qty*price). Use
the constructor in Design2 class to change the Design1 type data to Design2 type. Your
code should be able to execute the statement D2=D1 (where D1 and D2 are objects of
respective design class).
*/

#include<iostream>

using namespace std;

class Design1{
    int code, qty;
    float price;

    public:
    Design1 (int a, int b, float c){
        code = a;
        qty = b;
        price = c;
    }

    int getCode(){
        return code;
    }

    int getQty(){
        return qty;
    }
    float getPrice(){
        return price;
    }

     void display(){
        cout<<"For design 1:"<<endl;
        cout<<"Code: "<<code<<"  Quantity: "<<qty<<"  Price: Rs."<<price<<endl;
    }


};

class Design2{
    int code;
    float value;
    
    public:
    Design2 (Design1 &a){
        code= a.getCode();
        value = a.getQty() * a.getPrice();
    }
    
    void display(){
        cout<<"For design 2"<<endl;
        cout<<"Code: "<<code<<"  Value: Rs."<<value<<endl;
    }
};





int main(){
    Design1 D1(1,5,50);
    D1.display();

    Design2 D2 = D1;
    D2.display();
}
