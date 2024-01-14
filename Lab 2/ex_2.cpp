//Write a program to illustrate the use of namespace in c++. Define two different namespaces names BEI
//and BCT,define some common and different attribute and try to acess it in your program.

#include<iostream>

using namespace std;

namespace BEI{
    char  faculty[20] = "Elcetronics";
    char subject[5] = "OOP";
    int room = 401;

    void printClass(){
        cout<<faculty<<endl;
    }

    void printSubject(){
        cout<<subject<<endl;
    }

    void printLabRoom(){
        cout<<room<<endl;
    }
}

namespace BCT{
    char  faculty[20] = "Computer";
    char subject[20] = "Microprocessor";
    int room = 301;

    void printClass(){
        cout<<faculty<<endl;
    }

    void printSubject(){
        cout<<subject<<endl;
    }

    void printRoom(){
        cout<<room<<endl;
    }
}

int main(){
    using namespace BEI;
    using namespace BCT;

    printLabRoom();
    BEI::printSubject();
    BEI::printClass();
    cout<<endl;
    printRoom();
    BCT::printSubject();
    BCT::printClass();
    return 0;
} 
   