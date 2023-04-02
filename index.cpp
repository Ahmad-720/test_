#include <iostream>
using namespace std;

class student{
    private:
    int id;
    public:
    string name;
    int age;
    float finals_grade;
    student(string Name,int Age,float Grade,int ID){
        name = Name;
        age = Age;
        finals_grade = Grade;
        id = ID;
    }
    int get_id(){
        return id;
    }
};