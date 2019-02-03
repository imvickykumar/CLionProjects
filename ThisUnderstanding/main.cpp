#include <iostream>

using namespace std;


class student{
public:  static int couunt;
public: char batch;
public :int roll;
public :int age;

//public: student(int roll,int age){
//        this->roll=roll;
//        this->age=age;
//
//    }

public:char getRoll(char grade){
    this->batch=grade;
    return batch;
}
};

int main() {

    student student1;

    student1.age=5;
    student1.roll=6;
    student1.batch='A';

    student student2;
//    student2.getRoll(7);
    cout<<student2.getRoll('A');





    return 0;
}