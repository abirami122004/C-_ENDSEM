#include <iostream>
#include <string>
using namespace std;
class person {
protected:
    string name;
public:
    Person(string n){
    name=n;
    }
    void displayPerson(){
    cout << "Name:" << name << endl;
    }
};
class Student : public Person{
private:
    int regNo;
public:
    Student(string n,int r): Person(n){
    regNo = r;
    }
    void displayStudent(){
        displayPerson();
        cout << "Register Number:" << regNo << endl;
        cout << "***********************" << endl;
    }
};
class Teacher : public Person {
private:
    string subject;
public:
    Teacher(string n,string s):Person(n){
    subject = s;
    }
    void displayTeacher() {
    displayPerson();
    cout << "Subject:" << subject << endl;
    Student s1("Abirami",101);
    s1.displayStudent();
    Teacher t1("Mr.George","Computer Science");
    t1.displayTeacher();
    return 0;
    }
