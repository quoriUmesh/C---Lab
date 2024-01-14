//Write the above program with default construction and parameterized constructor (You
// can combine all files into a single file if it is convenient).

#include<iostream>
 #include<string>
 using namespace std;

 class Person{
    string name;
    int age;

    public:
        string alias;
        void getdata();
        void display();

    Person(){
        name = "Name_here";
        age = 0;
        alias= "Nickname";
    }
    Person(string a, int b, string c){
        name = a;
        age = b;
        alias = c;
    }

    Person(Person &a){
        name = a.name;
        age=a.age;
        alias = a.alias;
    }
 };

void Person::getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter alias: ";
        cin>>alias;

        
    }
void Person::display(){
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nAlias: "<<alias;
    }

    int main(){
        Person p1;
        cout<<"For Person p1:"<<endl;
        p1.display();

        Person p2("Umesh", 21, "quoriUmesh");
        cout<<"\nFor Person p2:"<<endl;
        p2.display();

        Person p3=p2;
        cout<<"\nFor Person p3:"<<endl;
        p3.display();

        Person p4;
        cout<<"\nFor persom p4"<<endl;
        p4.getdata();
        p4.display();

        return 0;
    }