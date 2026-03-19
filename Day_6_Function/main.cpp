#include<iostream>
using namespace std;
bool isPrime(int n){ 
    if (n<2){
        return false;
    }
    for (int i =2; i<n; i++){
        if(n%i==0){
            return false;
        }
    return true;
    }
}
int factorial(int n){
    if(n==0) {
        return 1;
    }
    return n * factorial(n-1);
}
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num;
    cout<<"Enter a number."<<endl;
    cin>>num;
    // Prime Number
    if(isPrime(num)){
        cout<<num<<" Number is Prime."<<endl;
    }
    else
        cout<<num<<" Number is not Prime."<<endl;
    // Factorial Number
    cout<<"Factorial of :"<<factorial(num)<<endl;
    // Fibonacci 
    cout<<"Fibonacci: "<<fibonacci(num)<<endl;
    return 0;

}