/*Write a program with three classes Student, Test and Result by using multilevel inheritance. Assume
necessary data members and functions with input information, input data and calculate marks total and
display result*/

#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
    string name, faculty;
    int roll;

    public:
     Student (){
        getdata();
    }
    
    void getdata(){
        cout<<"Enter name, faculty and roll no of the student in order:\n";
        cin>>name>>faculty>>roll;
    }
   
   

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Faculty: "<<faculty<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }
};

class Test: public Student{
    protected:
    int maths, oop, microprocessor, chemistry, ecm;

    public:
    Test(){
        getdata();
    }
    void getdata(){
        cout<<"Enter marks in maths, oop, microprocessor, chemistry, ecm in order:\n";
        cin>>maths>>oop>>microprocessor>>chemistry>>ecm;
    }
    
    void display(){
        Student::display();
        cout<<"Marks obtained in\n Maths = "<<maths<<"\nOOP = "<<oop<<"\n Microprocessor = "
        <<microprocessor<<"\nChemistry = "<<chemistry<<endl<<"ECM = "<<ecm<<endl;
    }
};

class Result : public Test {
    int total;
    float percentage;

    public:
    Result(){
        total = maths + oop + microprocessor + chemistry + ecm;
        percentage = total/5;
    }

    void display(){
        cout<<endl;
        Test::display();
        cout<<"Total marks = "<<total<<endl;
        cout<<"Percentage obtained = "<<percentage<<endl;
    } 
    

};

int main(){
    Result R1;
    R1.display();
}
