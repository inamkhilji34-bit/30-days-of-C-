#include<iostream>
using namespace std;
int main(){
    int x;
    int i;
    i = 1;
    cout<<"Enter the number for its table."<<endl;
    cin>>x;
    int loop;
    cout<<"Which loop you would like to use. \n1. for loop \n2. while loop \n3. do-while loop"<<endl;
    cin>>loop;
    do{
        switch (loop)
        {
        case 1:
            cout<<"The table of "<<x<<" is:"<<endl;
            for(i=1; i <= 10; i++){
                cout<<x <<" " << '*' <<" "<< i <<" "<< '=' << " "<< x * i<<endl;;
        }
            break;
        case 2:
            cout<<"The table of "<<x<<" is:"<<endl;
            while(i<=10){
                cout<<x <<" " << '*' <<" "<< i <<" "<< '=' << " "<< x * i<<endl;
                i++;
            }
            break;
        case 3:
            cout<<"The table of "<<x<<" is:"<<endl;
            do {
                cout<<x <<" " << '*' <<" "<< i <<" "<< '=' << " "<< x * i<<endl;;
                i++;
            } while(i<=10);
            break;
        default:
            cout<<"Enter a valid number.";
            break;
        }
        break;
    } while(loop <= 3);
    
    
return 0;
}