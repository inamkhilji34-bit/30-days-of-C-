#include<iostream>
using namespace std;
class BankAccount{
    static int count;
    double balance;
public:
    BankAccount(double b): balance(b){count ++;}
    ~BankAccount(){count--;}
    static int getcount(){return count;}

};
int BankAccount::count = 0;
int main(){
    {
        BankAccount b1(4300);
        BankAccount b2(42404);
        BankAccount b3(23423);
        cout << "Number of accounts are: " << BankAccount::getcount() << endl;
    }
    cout << "After leaving scope, number of accounts are: " << BankAccount::getcount() << endl;
    return 0;
}