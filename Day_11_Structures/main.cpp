#include <algorithm>
#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    double GPA;
};

int main(){
    student s1{"Ali", 20, 3.7};
    student s2{"Inam", 21, 4.0};
    student s3{"Ibad", 13, 3.6};
    // Find the student with the maximum GPA
    const student* max_student = &s1;
    if (s2.GPA > max_student->GPA) max_student = &s2;
    if (s3.GPA > max_student->GPA) max_student = &s3;
    cout << max_student->name << " has the highest GPA of " << max_student->GPA << endl;
    
    return 0;
}   
    