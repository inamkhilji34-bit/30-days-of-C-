#include<iostream>
using namespace std;
int main(){
    double num_1;
    double num_2;
    char op;
    cout<<"Enter two numbers and an operator."<<endl;
    cout<<"Enter first number:"<<endl;
    cin>>num_1;
    cout<<"Enter Second number:"<<endl;
    cin>>num_2;
    cout<<"Enter an operator:";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The sum is: "<<num_1 + num_2<<endl;
        break;
    case '-':
        cout<<"The difference is: "<<num_1 - num_2<<endl;
        break;
    case '*':
        cout<<"The product is: "<<num_1 * num_2<<endl;
        break;
    case '/':
        if (num_2 == 0 ){
            cout<<"Cannot divide by zero"<<endl;
        } 
        else
        cout<<"The division is: "<<num_1 / num_2<<endl;
        break;
    default:
        cout<<"Invalid operator."<<endl;
        break;
    }

return 0;
}