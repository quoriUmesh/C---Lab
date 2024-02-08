/*Define a class named Course. Derive three classes from this class named: Mathematics,
Science and Engineering. Then, derive two classes from Science named: Physics and
Chemistry. Define data members and member functions as appropriate. Illustrate the concept
of member function overriding and accessing overridden members from the derived class in
your program.
*/

#include<iostream>
#include<string>

using namespace std;

class Course{

    protected:
    string course_name;
    int totalcredits;

    public:
    Course(){
        course_name = "BEI";

       totalcredits = 40;
    } 

    void display(){
            cout<<"Course Name = "<<course_name<<endl<<"Credit points = "<<totalcredits<<endl;
    }

};

class Mathematics: public Course{
    protected:
    string faculty;
    int credit;

    public:
    Mathematics(){
        faculty = "Mathematics";
        credit = 10;
    }

    void display(){
        cout<<"\tFaculty: "<<faculty<<endl;
        cout<<"\tCredit: "<<credit<<endl;
    }
};

class Science: public Course{
    protected:
    string faculty;
    int credit;

    public:
    Science(){
        faculty = "Science";
        credit = 20;
    }

    void display(){
        cout<<"\tFaculty: "<<faculty<<endl;
        cout<<"\tCredit: "<<credit<<endl;
    }
};

class Engineering: public Course{
    protected:
    string faculty;
    int credit;

    public:
    Engineering(){
        faculty = "Engineering";
        credit = 10;
    }

    void display(){
        cout<<"\tFaculty: "<<faculty<<endl;
        cout<<"\tCredit: "<<credit<<endl;
    }
};

class Physics: public Science{
    string subject;
    int credits;

    public:
    Physics(){
        subject = "Physics";
        credits = 10;
    }

    void display(){
        cout<<"\t\tSubject: "<<subject<<endl;
        cout<<"\t\tCredits: "<<credits<<endl;
    }
};

class Chemistry: public Science{
    string subject;
    int credits;

    public:
    Chemistry(){
        subject = "Chemistry";
        credits = 10;
    }

    void display(){
        cout<<"\t\tSubject: "<<subject<<endl;
        cout<<"\t\tCredits: "<<credits<<endl;
    }
};


int main(){
    Mathematics m;
    m.Course::display();
    m.display();

    Physics p;
    p.Science::display();
    p.display();

    Chemistry c;
    c.display();

    Engineering e;
    e.display();


}
