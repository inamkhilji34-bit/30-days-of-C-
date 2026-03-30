#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    // origional value of x
    int x = 10;
    cout<<"The value of a is: "<<x<<endl;
    int *p = &x;
    // value updated through pointers
    *p = 20;
    cout<<"The updated value of x is: "<<x<<endl;
    int y = 30;
    swap (&x, &y);
    // value swaped through swap function
    cout<<"The value of x: "<<x<<endl;
    // origional value of y
    cout<<"The Value of y is: "<<y<<endl;


return 0;
}