#include<iostream>
using namespace std;
class BankAccount{ 
private:
    double balance = 0;
    
public:
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout<<"PKR "<<amount<<" deposited."<<endl;
        }
        else{
            cout<<"Enter a valid positive amount."<<endl;
        }
    }
    void withdraw (double amount){
        if(amount > 0){
            if (amount<=balance){
                balance -= amount;
                cout<<"PKR "<<amount<<" withdrawn."<<endl;
            }
            else{ // if withdraw exceeded than current balance
                cout<<"Amount exceeded than the current balance."<<endl;
            }
        }
        else{
            cout<<"Enter a valid positive amount."<<endl;
        }
    }
    double getBalance() const {
        return balance;
    }
    
};
int main(){
    BankAccount B1;
    B1.deposit(9000);
    B1.withdraw(3000);
    cout<<B1.getBalance()<<endl;
    BankAccount b2;
    b2.deposit(4300);
    cout<<b2.getBalance()<<endl;
    b2.withdraw(5000);
    b2.deposit(-500);
    b2.withdraw(-100);
    cout<<b2.getBalance()<<endl;
return 0;
}