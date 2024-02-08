/*Define a class Time with attributes hr, min and sec. Define different types of constructors
to initialize the object of Time. Default constructor should initialize the time with 12 hr, 0
min and 0 sec. Parameterized constructor should initialize the time accordingly as the
user inputs the time in seconds. (Suppose user input time is 100 secs then constructor
should initialize the object with 0 hr 1 min 40 secs. Also define 2
nd object of time to copy
value of 1st object to new object using copy constructor.*/

#include<iostream>

using namespace std;

class Time{
    public:

    int hour, minutes, seconds;

    
    Time(){
    hour=12;
    minutes=0;
    seconds=0;
    }
    Time(int hr, int min, int sec):hour(hr), minutes(min), seconds(sec){}

    Time(int sec){
        seconds = sec%60;
        minutes = sec/60;
        hour = minutes/60;
        minutes = minutes%60;
        // seconds = sec%60;
        // int min = sec/60;
        // if(min >= 60){
        //     hour = min/60;
        //     minutes = min%60;
        // }

        // else{
        //     hour = 0;
        //     minutes =min;
        // }  
    }

    /*Time (int s) {
        seconds = s%3600;
        minutes = s/3600;
        hour = minutes/60;
        minutes = minutes%60;
    }*/
    void display(){
        cout<<"The time is: "<<hour<<" hr "<<minutes<<" min "<<seconds<<" secs."<<endl;
    }

    Time(Time& a){
     hour=a.hour;
     minutes=a.minutes;
     seconds=a.seconds;   
    }
    
};

int main(){
    Time T1(500);
    Time T2=T1;
    Time T3;
    T1.display();
    T2.display();
    T3.display();
    
    return 0;
}