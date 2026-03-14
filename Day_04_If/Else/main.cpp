#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks between 0 to 100."<<endl;
    cin>>marks;
    if (marks < 0 or marks> 100){
        cout<<"Invalid input."<<endl;
        return 0;
    }
    else if (marks>=90){
        cout<<"Your grade is A."<<endl;
    }
    else if (marks>= 80){
        cout<<"Your grade is B."<<endl;
    }
    else if (marks>=70){
        cout<<"Your grade is C."<<endl;
    }
    else if (marks>=60){
        cout<<"Your grade is D."<<endl;
    }
    else
        cout<<"Your grade is F.";

return 0;
}