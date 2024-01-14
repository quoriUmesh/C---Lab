#include<iostream>

using namespace std;

class Time{
    int hour, minutes, seconds;
    public:
    friend void mul(Time &,int);
    Time(){
        hour = 00;
        minutes = 00;
        seconds = 00;
    }
    Time(int a, int b, int c) : hour(a),minutes(b),seconds(c){};
    void display(){
        cout<<"time is "<<hour<<"::"<<minutes<<"::"<<seconds<<endl;
    }


};
void mul(Time &t, int a){
    t.hour = t.hour *a;
    t.minutes = t.minutes *a;
    t.seconds = t.seconds * a;
    t.display();
}
int main (){
Time t01(2,4,3);
t01.display();
mul(t01,4);

}